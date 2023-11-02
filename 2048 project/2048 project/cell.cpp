#include "cell.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"

Cell::Cell(){
	value = 0;
}

int Cell::getValue() {
	return value;
}

void Cell::setValue(int new_value) {
	value = new_value;
}

bool Cell::isEmpty() {
	if (value == 0) {
		return true;
	} else {
		return false;
	}
}