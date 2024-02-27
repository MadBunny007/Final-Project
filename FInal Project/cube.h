#pragma once
#include "three_dimension_shapes.h"
class cube : public three_dimension_shapes
     
{
protected:
	int side;
	shapeplane cubeplane;
public:
	cube(int side, bool x, bool y, bool z);


	void set_side(int side);


	void set_side();
	double get_side();
	double Calculate_volume();
	double Calculate_surface_area();
	void manualdisplay_volume(int i);
	void manualdisplay_surfacearea(int i);
	void display();
	void displayplanecoord();
};

