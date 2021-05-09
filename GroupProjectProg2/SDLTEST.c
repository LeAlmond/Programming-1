#include <stdio.h>
#include "windows.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <stdlib.h>
#include <stdbool.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(NULL, "Goodbye, cruel world!", "Note", MB_OK);
    return 0;
}

int main( int argc, char* args[] )
{

        SDL_Init(SDL_INIT_EVERYTHING);

        SDL_Window *window = SDL_CreateWindow("Hospital Form", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
        SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

        bool running = true;

        SDL_Event event;

        while (running) {
                while (SDL_PollEvent(&event)) {
                        if (event.type == SDL_QUIT) {

                                running = false;
                        }
                }

                SDL_RenderClear(renderer);
                //render stuff
                SDL_RenderPresent(renderer);
        }
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();

        return 0;
}
