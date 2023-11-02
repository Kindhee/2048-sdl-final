#pragma once

class Cell
{
public :
	int value;
	
	Cell();

	int getValue();

	void setValue(int new_value);

	bool isEmpty();
};

