#include "window.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
using namespace std;

Window::Window() {
        
        int flags = 0;
        flags = SDL_WINDOW_RESIZABLE;

        if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

            window = SDL_CreateWindow("2048", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, flags);
            if (window) {
                SDL_SetWindowMinimumSize(window, 800, 800);
                SDL_SetWindowMaximumSize(window, 800, 800);
            }
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (renderer) {
                SDL_RenderPresent(renderer);
                isRunning = 1;
            }

        }
}

void Window::display() {
    SDL_RenderPresent(renderer);
}


