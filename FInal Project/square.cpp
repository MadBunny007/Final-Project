#include "square.h"
void square::displayplanecoord() {
	cout << "It is Present in ";
	if (squareplane.get_x()) {
		cout << "x plane ";
	}
	if (squareplane.get_y()) {
		cout << "y plane ";
	}
	if (squareplane.get_z()) {
		cout << "z plane ";
	}

}
void sphere::displayplanecoord() 
{
	cout << "It is Present in ";
	if (sphereplane.get_x()) {
		cout << "x plane ";
	}
	if (sphereplane.get_y()) {
		cout << "y plane ";
	}
	if (sphereplane.get_z()) {
		cout << "z plane ";
	}

}
void square::display() {
	cout << "The Area of Square is -> ";
	cout << Calculate_area() << endl;
	cout << "The Perimeter of Square is -> ";

	cout << Calculate_perimeter() << endl;

	displayplanecoord();

	cout << "\n___________________________________________" << endl;


}
void square::manualdisplay_area(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_area();
}
void square::manualdisplay_perimeter(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_perimeter();
}
void square::set_side() {
	cout << "Enter the side of the square -> ";
}
void square::set_side(int side) {
	this->side = side;
}
double square::get_side() {
	return side;
}
double square::Calculate_area() {

	return side * side;

}
double square::Calculate_perimeter() {

	return 4 * side;

}
void sphere::set_radius() {
	cout << "Enter the Radius of the Circle -> ";
	cin >> radius;
}
square::square(int side, bool x, bool y, bool z) {
	this->side = side;
	squareplane.set_x(x);
	squareplane.set_y(y);
	squareplane.set_z(z);

}
