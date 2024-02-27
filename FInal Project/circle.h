#pragma once
#include "two_dimension_shapes.h"
class circle :
    public two_dimension_shapes
{
protected:
	double radius;
	shapeplane circleplane;

public:
	circle(int radius, bool x, bool y, bool z);
	void set_radius();
	void set_radius(int radius);

	double get_radius();
	double Calculate_area();
	double Calculate_perimeter();
	void manualdisplay_area(int i);
	void manualdisplay_perimeter(int i);
	void display();
	void displayplanecoord();
};

