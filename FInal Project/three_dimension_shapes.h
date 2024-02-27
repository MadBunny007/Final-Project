#pragma once
#include "shape.h"
class three_dimension_shapes : public shape
{
   public:

	   virtual double Calculate_surface_area() = 0;
	   virtual double Calculate_volume() = 0;
	   virtual void display() = 0;
	   virtual void displayplanecoord() = 0;

};

