#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include"gameObject.h"

GameObject::GameObject() {

}

void GameObject::copyRenderer(SDL_Renderer* renderer, SDL_Texture* texture, SDL_Rect rect) {
	SDL_RenderCopy(renderer, texture, NULL, &rect);
}
