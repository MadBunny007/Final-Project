#include "cube.h"
void cube::displayplanecoord() {
	cout << "It is Present in ";
	if (cubeplane.get_x()) {
		cout << "x plane ";
	}
	if (cubeplane.get_y()) {
		cout << "y plane ";
	}
	if (cubeplane.get_z()) {
		cout << "z plane ";
	}

}
void cube::display() {
	cout << "The surface area of cube is -> ";

	cout << Calculate_surface_area() << endl;
	cout << "The volume of cube is -> ";

	cout << Calculate_volume() << endl;

	displayplanecoord();
	cout << "\n___________________________________________" << endl;


}
cube::cube(int side, bool x, bool y, bool z) {
	this->side = side;
	cubeplane.set_x(x);
	cubeplane.set_y(y);
	cubeplane.set_z(z);
}
void cube::manualdisplay_surfacearea(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_surface_area();
}
void cube::manualdisplay_volume(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_volume();
}
void cube::set_side() {
	cout << "Enter the side of the cube -> ";
	cin >> side;
}
void cube::set_side(int side) {
	cout << "Enter the side of the cube -> ";
	cin >> side;
}
double cube::get_side() {
	return side;
}
double cube::Calculate_surface_area() {

	return  side * side * side;
}
double cube::Calculate_volume() {

	return 6 * side * side;

}