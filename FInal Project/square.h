#pragma once
#include "two_dimension_shapes.h"
class square : public two_dimension_shapes

{
protected:
	int side;
	shapeplane squareplane;
public:

	square(int side, bool x, bool y, bool z);


	void set_side();
	void set_side(int side);


	double get_side();
	double Calculate_area();
	double Calculate_perimeter();
	void manualdisplay_area(int i);
	void manualdisplay_perimeter(int i);
	void display();
	void displayplanecoord();

};

