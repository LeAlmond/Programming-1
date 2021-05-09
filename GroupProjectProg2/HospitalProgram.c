#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Predifining  actions for Switches

#define  defwinx 500
#define  defwiny 550
#define  defposx 50
#define  defposy 50

#define  RETURN_HOME 0

#define  FILE_MENU_NEWPATIENTFILE 1
#define  FILE_MENU_NEWROOMFILE 2

#define  FILE_MENU_EDITPATIENT 3
#define  FILE_MENU_EDITROOM 4
#define  FILE_MENU_FREEEDITPATIENT 5
#define  FILE_MENU_FREEEDITROOM 6

#define  FILE_MENU_SAVE 7
#define  FILE_MENU_EXIT 8

#define  ADD_MENU_PATIENT 9
#define  ADD_MENU_ROOM 10

#define ADD_MENU_SUBMIT 11

#define ADD_MENU_PID 12
#define ADD_MENU_PNAME 13
#define ADD_MENU_PBIRTH 14
#define ADD_MENU_PCOND 15

//Program Function Declaration

LRESULT CALLBACK WindProc(HWND,UINT,WPARAM,LPARAM);

void AddMenu(HWND);

void AddMainControls(HWND);

HMENU hMenu;

HWND hEdit;


HINSTANCE hMAINMENU;

HWND hMain[10];

HWND hSUBMIT;

#define PID 1
#define PNAME 2
#define PBIRTH 3
#define PCOND 4

HWND hADDP[6][3];
HWND hADDR;
HWND hEDITP;
HWND hEDITR;

char maintext[1000] = "HOPE MADE UP HOSPITAL\n\nStaff Functionality Form\n\nOptions Available to Staff include:\n\n\nAdd Patient Condition\nSet Admission Status\nSet Patient ID\nAdd Patient Name\nAdd Patient Age\nEdit Patient Information\n\nAdd Room Information\nAdd Current Room Status\nAssign Patients To Rooms\nEdit Room's\n\n\n\n\n\n\n\nCreated By:\nThe Dudes in this Group";

// Add Patient Functions

FILE *patient;

//Creating and Defining Program Window

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int nCmdShow){

        WNDCLASSW Hospital = {0};

        Hospital.hbrBackground = (HBRUSH)COLOR_WINDOW+2;
        Hospital.hCursor = LoadCursor(NULL,IDC_ARROW);
        Hospital.hInstance = hInst;
        Hospital.lpszClassName = L"PatientWindowClass";
        Hospital.lpfnWndProc = WindProc;

        if (!RegisterClassW(&Hospital)) {
                return -1;
        }

        //Creates the Window, Defines the name, Location and size of window

        CreateWindowW(L"PatientWindowClass", L"Hospital Application", WS_TABSTOP | WS_VISIBLE, 800, 100, 600, 800, NULL, NULL,NULL, NULL);

        MSG msg = {0};

        while ( GetMessage(&msg,NULL,NULL,NULL))
        {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
        }

        return 0;
}

//What Happens When Program is Actual Run

LRESULT CALLBACK WindProc(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp){

        FILE *curfile;

        FILE *patient;

        char name[60],  birth[4], id[7], status[10], output [81];

        char text[1000];
        char condition[5][9] = {{"none"},{"mild"},{"average"},{"severe"},{"critical"}};
        char member[10];
        int cnt, cnt2, year;

        time_t seconds=time(NULL);
        struct tm* current_time=localtime(&seconds);

        year = current_time->tm_year + 1900;

        SendMessage(hADDP[PID][1], EM_SETLIMITTEXT, (WPARAM)7, (LPARAM)0);

        SendMessage(hADDP[PBIRTH][1], EM_SETLIMITTEXT, (WPARAM)4, (LPARAM)0);

        for (cnt = 0; cnt < 5; cnt++) {
                strcpy(member, condition[cnt]);
                SendMessage(hADDP[PCOND][1],(UINT) CB_ADDSTRING, 0,(LPARAM) member);

        }

        switch (msg) {

        case WM_COMMAND:
                switch (wp) {

                case FILE_MENU_NEWPATIENTFILE:
                        printf("\nNew Patient To Be Added \n");

                        GetWindowText(hEdit, text, 1000);
                        strcat(text, "_patient.txt");
                        curfile = fopen (text,"a");

                        printf("%s", text);
                        break;

                case FILE_MENU_NEWROOMFILE:
                        printf("\nNew Room To Be Added \n");

                        GetWindowText(hEdit, text, 1000);
                        strcat(text, "_room.txt");
                        curfile = fopen (text,"a");

                        break;

                case FILE_MENU_EDITPATIENT:
                        printf("\nPatient File To Be Edited\n");

                        if ((patient = fopen("patient.txt","r")) == NULL) {
                                printf("Error! opening file");
                                MessageBox(hWnd, "File Doesnot Exist", "Error", MB_OK);

                        }

                        fscanf(patient,"%s", maintext);
                        printf("%s",maintext);
                        SetWindowText(hMain[0], maintext);

                        fclose(patient);

                        break;

                case FILE_MENU_EDITROOM:
                        printf("\nRoom File To Be Edited\n");

                        break;

                case FILE_MENU_FREEEDITROOM:
                        printf("\nRoom File To Be Edited\n");

                        break;

                case FILE_MENU_FREEEDITPATIENT:
                        printf("\nPatient File To Be Edited\n");

                        GetWindowText(hMain[0], text, 1000);

                        strcpy(maintext, text);

                        DestroyWindow(hMain[0]);

                        hMain[0] = CreateWindow("edit", maintext, WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | ES_MULTILINE |ES_AUTOVSCROLL, defposx, defposy, defwinx, defwiny, hWnd, NULL, NULL, NULL);

                        printf("%s",maintext);

                        break;

                case FILE_MENU_SAVE:
                        printf("\nTemp File Should Now Replace Main File\n");

                        GetWindowText(hMain[0], text, 1000);

                        DestroyWindow(hMain[0]);

                        hMain[0] = CreateWindow("static", maintext, WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER , defposx, defposy, defwinx, defwiny, hWnd, NULL, NULL, NULL);

                        SetWindowText(hMain[0], text);

                        MessageBeep(MB_OK);
                        MessageBoxA(hWnd,"File Saved", "File", MB_OK);
                        break;

                case FILE_MENU_EXIT:
                        printf("\nClose The Application\n");
                        MessageBeep(MB_OK);
                        if (MessageBoxA(hWnd,"Are you sure you want to Exit", "", MB_OKCANCEL) == 1) {
                                DestroyWindow(hWnd);
                        }

                        break;

                case ADD_MENU_PATIENT:

                        printf("\nAdding new patients to file\n");

                        if ((patient = fopen ("./patient.txt", "a")) == NULL) {
                                printf("Error! opening file");
                                MessageBox(hWnd, "File Doesnot Exist", "Error", MB_OK);
                                fprintf(patient,"\n\nPatient ID\t  Patient Name\t\t\tBirth Year\t      Condition\n");

                        }

                        fclose(patient);

                        for (cnt = 0; cnt < 10; cnt++) {
                                DestroyWindow(hMain[cnt]);
                        }

                        hADDP[0][0] = CreateWindow("edit", text, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_AUTOVSCROLL | ES_MULTILINE   , defposx, defposy + 100, defwinx, defwiny - 200, hWnd, NULL, NULL, NULL);

                        hADDP[PID][2] = CreateWindow("button", "X", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_TABSTOP, defposx + defwinx - 20, defposy, 20, 20, hWnd, (HMENU)FILE_MENU_EXIT, NULL, NULL);
                        hADDP[0][1] = CreateWindow("button", "SUBMIT ALL", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_TABSTOP, defposx + (defwinx/4 *.1), defposy + (defwiny*.9), defwinx*.95, 20, hWnd, (HMENU)ADD_MENU_SUBMIT, NULL, NULL);
                        hADDP[0][2] = CreateWindow("button", "Back", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_TABSTOP, defposx + (defwinx/4 *.1), defposy + (defwiny*.95), defwinx*.95, 20, hWnd, (HMENU)RETURN_HOME, NULL, NULL);

                        hADDP[PID][0] = CreateWindow("static", "ID", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER, defposx + (defwinx/4 *.1), defposy + (defwiny * .05), defwinx/4 *.8, 20, hWnd, NULL, NULL, NULL);
                        hADDP[PID][1] = CreateWindow("edit", NULL, WS_VISIBLE | ES_CENTER | WS_CHILD | WS_BORDER | ES_NUMBER, defposx + (defwinx/4 *.1), defposy + (defwiny * .1), defwinx/4 *.8, 20, hWnd, (HMENU)ADD_MENU_PID, NULL, NULL);

                        hADDP[PNAME][0] = CreateWindow("static", "Name", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER, defposx + (defwinx/4 *.95), defposy + (defwiny * .05), defwinx/2, 20, hWnd, NULL, NULL, NULL);
                        hADDP[PNAME][1] = CreateWindow("edit", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_WANTRETURN | ES_LOWERCASE, defposx + (defwinx/4 *.95), defposy + (defwiny * .1), defwinx/2, 20, hWnd, (HMENU)ADD_MENU_PNAME, NULL, NULL);

                        hADDP[PBIRTH][0] = CreateWindow("static", "Year", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER, defposx + (defwinx/8 *6), defposy + (defwiny * .05), defwinx/8 *.9, 20, hWnd, NULL, NULL, NULL);
                        hADDP[PBIRTH][1] = CreateWindow("edit", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER | ES_MULTILINE | ES_WANTRETURN, defposx + (defwinx/8 *6), defposy + (defwiny * .1), defwinx/8 *.9, 20, hWnd, NULL, NULL, NULL);

                        hADDP[PCOND][0] = CreateWindow("static", "Status", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER, defposx + (defwinx/8 *7), defposy + (defwiny * .05), defwinx/8 *.9, 20, hWnd, NULL, NULL, NULL);
                        hADDP[PCOND][1] = CreateWindow("combobox", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER | CBS_DROPDOWNLIST, defposx + (defwinx/8 *7), defposy + (defwiny * .1), defwinx/8 *.9, 20, hWnd, (HMENU)ADD_MENU_PCOND, NULL, NULL);

                        break;

                case ADD_MENU_ROOM:
                        printf("\nHelp Pressed\n");

                        break;

                case ADD_MENU_SUBMIT:

                        printf("\n Submit all Button Pressed\n");

                        patient = fopen ("patient.txt", "a");

                        GetWindowTextA(hADDP[PID][1], id, 8);

                        int idint;
                        sscanf(id, "%d", &idint);

                        if (idint < 999999) {
                                printf("Invalid Id Number\n");

                                MessageBeep(MB_OK);
                                if (MessageBoxA(hWnd,"Invalid Id Number", "Error", MB_OK) == 1) {

                                }

                                idint = 0;
                                break;
                        }else{
                                printf("%s\t",id);

                        }
                        char pid[7];
                        strcpy(pid, id);
                        strcat(output, id);
                        fflush(stdin);

                        GetWindowTextA(hADDP[PNAME][1], name, 60);
                        printf("%s\t",name);

                        char pname[60];
                        strcpy(pname, name);
                        strcat(output, "        ");
                        strcat(output, name);
                        fflush(stdin);

                        GetWindowTextA(hADDP[PBIRTH][1], birth, 5);

                        int birthint;
                        sscanf(birth, "%d", &birthint);

                        if (birthint > year || birthint < 1900) {
                                printf("Invalid Birth Year\n");

                                MessageBeep(MB_OK);
                                if (MessageBoxA(hWnd,"Invalid Birth Year", "Error", MB_OK) == 1) {

                                }

                                birthint = 0;
                                break;
                        }else{
                                printf("%s\t",birth);
                                strcat(output, "\t\t\t");
                                strcat(output, birth);
                                fflush(stdin);
                        }

                        GetWindowTextA(hADDP[PCOND][1], status, 11);
                        strcat(output, "    ");
                        strcat(output, status);
                        strcat(output, "    ");
                        printf("%s",status);

                        fprintf(patient,"\n%-18s",pid);
                        fprintf(patient,"%-30s",pname);
                        fprintf(patient,"%-22s",birth);
                        fprintf(patient,"%-22s",status);

                        GetWindowText(hADDP[0][0], text, 1000);

                        strcat(text, output);

                        SetWindowText(hADDP[0][0], text);

                        fclose(patient);

                        break;

                case RETURN_HOME:
                        for (cnt = 0; cnt < 10; cnt++) {
                                for (cnt2 = 0; cnt2 < 10; cnt2++) {
                                        DestroyWindow(hADDP[cnt][cnt2]);
                                }
                        }
                        AddMainControls(hWnd);
                        break;

                }

                break;

        case WM_CREATE:
                AddMenu(hWnd);
                AddMainControls(hWnd);
                break;

        case WM_DESTROY:
                PostQuitMessage(0);

                break;

        default:
                return DefWindowProcW(hWnd,msg,wp,lp);
        }

        return 0;
}

//Fledged Out Functions for Program

void AddMenu(HWND hWnd) {

        hMenu = CreateMenu();
        HMENU hFileMenu = CreateMenu();
        HMENU hNewSubMenu = CreateMenu();
        HMENU hEditSubMenu = CreateMenu();
        HMENU hAddMenu = CreateMenu();

        AppendMenuA(hMenu, MF_POPUP, (UINT_PTR)hFileMenu, "File");

        //New Menu Options

        AppendMenuA(hNewSubMenu, MF_STRING, FILE_MENU_NEWPATIENTFILE, "New Patient File");
        AppendMenuA(hNewSubMenu, MF_STRING, FILE_MENU_NEWROOMFILE, "New Room File");

        //Edit Menu Options

        AppendMenuA(hEditSubMenu, MF_STRING, FILE_MENU_EDITPATIENT, "Edit Patient File");
        AppendMenuA(hEditSubMenu, MF_STRING, FILE_MENU_EDITROOM, "Edit Room File");
        AppendMenuA(hEditSubMenu, MF_STRING, FILE_MENU_FREEEDITPATIENT, "Free Form Edit Patient File");
        AppendMenuA(hEditSubMenu, MF_STRING, FILE_MENU_FREEEDITROOM, "Free Form Edit Room File");

        //Base File menu Options

        AppendMenuA(hFileMenu, MF_POPUP, (UINT_PTR)hNewSubMenu, "New");
        AppendMenuA(hFileMenu, MF_POPUP, (UINT_PTR)hEditSubMenu, "Edit");

        AppendMenuA(hFileMenu, MF_SEPARATOR, NULL, NULL);

        AppendMenuA(hFileMenu, MF_STRING, FILE_MENU_SAVE, "Save");
        AppendMenuA(hFileMenu, MF_SEPARATOR, NULL, NULL);

        //Add Menu Options

        AppendMenuA(hMenu, MF_POPUP, (UINT_PTR)hAddMenu, "Add");
        AppendMenuA(hAddMenu, MF_STRING, ADD_MENU_PATIENT, "Add Patient to File");
        AppendMenuA(hAddMenu, MF_STRING, ADD_MENU_ROOM, "Add Room to File");

        AppendMenuA(hMenu, MF_SEPARATOR, NULL, NULL);
        AppendMenuA(hMenu, MF_STRING, FILE_MENU_EXIT, "Exit");

        SetMenu(hWnd,hMenu);

}

void AddMainControls(HWND hWnd) {

        hMain[0] = CreateWindow("static", maintext, WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_SIZEBOX, defposx, defposy, defwinx, defwiny, hWnd, NULL, NULL, NULL);

        hMain[1] = CreateWindow("button", "ADD PATIENT", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER,defposx, (defposy + defwiny) * 1.02, defwinx/4 *.9, 20,hWnd, (HMENU)ADD_MENU_PATIENT,hMAINMENU, NULL);
        hMain[2] = CreateWindow("button", "ADD ROOM", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER,defposx + (defwinx/4), (defposy + defwiny) * 1.02, defwinx/4 *.9, 20,hWnd, (HMENU)ADD_MENU_PATIENT,hMAINMENU, NULL);
        hMain[3] = CreateWindow("button", "EDI PATIENT", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER,defposx + (defwinx/4*2), (defposy + defwiny) * 1.02, defwinx/4 *.9, 20,hWnd, (HMENU)ADD_MENU_PATIENT,hMAINMENU, NULL);
        hMain[4] = CreateWindow("button", "EDIT ROOM", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER,defposx + (defwinx/4*3), (defposy + defwiny) * 1.02, defwinx/4 *.9, 20,hWnd, (HMENU)ADD_MENU_PATIENT,hMAINMENU, NULL);
        hMain[5] = CreateWindow("button", "X", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER | WS_TABSTOP, defposx + defwinx - 20, defposy, 20, 20, hWnd, (HMENU)FILE_MENU_EXIT, NULL, NULL);

}
