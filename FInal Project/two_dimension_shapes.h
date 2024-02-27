#pragma once
#include "shape.h"

    class two_dimension_shapes : public shape {
	public:

		virtual double Calculate_area() = 0;
		virtual double Calculate_perimeter() = 0;
		virtual void display() = 0;
		virtual void displayplanecoord() = 0;

    };
    


