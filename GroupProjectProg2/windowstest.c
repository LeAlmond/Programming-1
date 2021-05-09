#include <windows.h>
#include "stdio.h"

#define  FILE_MENU_NEW 1
#define  FILE_MENU_OPEN 2
#define  FILE_MENU_SAVE 3
#define  FILE_MENU_EXIT 4
#define  HELP 5

LRESULT CALLBACK WindProc(HWND,UINT,WPARAM,LPARAM);

void AddMenu(HWND);

void AddControls(HWND);

HMENU hMenu;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow){

        WNDCLASSW Hospital = {0};

        Hospital.hbrBackground = (HBRUSH)COLOR_WINDOW;
        Hospital.hCursor = LoadCursor(NULL,IDC_ARROW);
        Hospital.hInstance = hInst;
        Hospital.lpszClassName = L"PatientWindowClass";
        Hospital.lpfnWndProc = WindProc;

        if (!RegisterClassW(&Hospital)) {
                return -1;
        }

        CreateWindowW(L"PatientWindowClass", L"Hospital Application", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 1600, 900, NULL, NULL,NULL, NULL);

        MSG msg = {0};

        while ( GetMessage(&msg,NULL,NULL,NULL))
        {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        return 0;
}

LRESULT CALLBACK WindProc(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp){
        switch (msg) {

        case WM_COMMAND:
                switch (wp) {
                case FILE_MENU_NEW:
                        printf("New File Pressed\n");
                        MessageBeep(MB_OK);
                        break;
                case FILE_MENU_OPEN:
                        printf("Open File Pressed\n");
                        MessageBeep(MB_OK);
                        break;
                case FILE_MENU_SAVE:
                        printf("Save File Pressed\n");
                        MessageBeep(MB_OK);
                        break;
                case FILE_MENU_EXIT:
                        printf("Exit Pressed\n");
                        MessageBeep(MB_OK);
                        DestroyWindow(hWnd);
                        break;
                case HELP:
                        printf("Help Pressed\n");
                        MessageBeep(MB_OK);
                        break;
                }
                break;
        case WM_CREATE:
                AddMenu(hWnd);
                AddControls(hWnd);
                break;
        case WM_DESTROY:
                PostQuitMessage(0);
                break;
        default:
                return DefWindowProcW(hWnd,msg,wp,lp);
        }

        return 0;
}

void AddMenu(HWND hWnd) {

        hMenu = CreateMenu();
        HMENU hFileMenu = CreateMenu();
        HMENU hSubMenu = CreateMenu();

        AppendMenuA(hSubMenu, MF_STRING, FILE_MENU_OPEN, "Open File");

        AppendMenuA(hFileMenu, MF_STRING, FILE_MENU_NEW, "New");
        AppendMenuA(hFileMenu, MF_POPUP, (UINT_PTR)hSubMenu, "Open");

        AppendMenuA(hFileMenu, MF_SEPARATOR, NULL, NULL);

        AppendMenuA(hFileMenu, MF_STRING, FILE_MENU_SAVE, "Save");
        AppendMenuA(hFileMenu, MF_SEPARATOR, NULL, NULL);
        AppendMenuA(hFileMenu, MF_STRING, FILE_MENU_EXIT, "Exit");


        AppendMenuA(hMenu, MF_POPUP, (UINT_PTR)hFileMenu, "File");
        AppendMenuA(hMenu, MF_STRING, HELP, "Help");

        SetMenu(hWnd,hMenu);

}

void AddControls(HWND hWnd){

    CreateWindowW(L"static", L"Enter Input Here : ", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_SIZEBOX , 400, 50, 800, 400, hWnd, NULL, NULL, NULL);
    CreateWindowW(L"static", L"Enter Input Here : ", WS_VISIBLE | WS_CHILD | WS_BORDER, 400, 500, 100, 20, hWnd, NULL, NULL, NULL);
    CreateWindowW(L"edit", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL , 500, 500, 700, 20, hWnd, NULL, NULL, NULL);

}
