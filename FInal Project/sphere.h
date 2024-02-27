#pragma once
#include "three_dimension_shapes.h"
class sphere :
    public three_dimension_shapes
{
protected:
	float radius;
	shapeplane sphereplane;
public:
	sphere(float radius, bool x, bool y, bool z);


	void set_radius(float radius);
	void set_radius();
	double get_radius();
	double Calculate_volume();
	double Calculate_surface_area();
	void manualdisplay_volume(int i);
	void manualdisplay_surfacearea(int i);
	void display();
	void displayplanecoord();
};

