#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

class GameObject
{

public:

	GameObject();

	void copyRenderer(SDL_Renderer* renderer, SDL_Texture* texture, SDL_Rect rect);

};
