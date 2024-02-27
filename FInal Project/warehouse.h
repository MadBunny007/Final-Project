#pragma once
class warehouse
{
public:

	static map < int, two_dimension_shapes* > arr_of_shapes;
	static map < int, three_dimension_shapes* > arr_of_shapes1;

	void addsquare();
	void addcircle();
	void addsphere();
	void addcube();
	void addsquare(int id);
	void addcircle(int id);
	void addsphere(int id);
	void addcube(int id);
	void displayallshapes(int i);
	void deleteshape();
	void update();
};

