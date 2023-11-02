#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

class Window
{

public :

	SDL_Renderer* renderer;
	SDL_Window* window;
	int isRunning;

	Window();

	void display();

};

