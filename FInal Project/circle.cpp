#include "circle.h"
void circle::displayplanecoord() {
	cout << "It is present in ";
	if (circleplane.get_x()) {
		cout << "x plane ";
	}
	if (circleplane.get_y()) {
		cout << "y plane ";
	}
	if (circleplane.get_z()) {
		cout << "z plane ";
	}
}
void circle::display() {
	cout << "The area of circle is -> ";
	cout << Calculate_area() << endl;
	cout << "The perimeter of circle is -> ";

	cout << Calculate_perimeter() << endl;

	displayplanecoord();
	cout << "\n___________________________________________" << endl;
}
void circle::manualdisplay_perimeter(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_perimeter();

}
void circle::manualdisplay_area(int i) {
	cout << warehouse::arr_of_shapes[i]->Calculate_area();

}
void circle::set_radius(int radius) {
	this->radius = radius;
}

void circle::set_radius() {
	cout << "Enter the Radius of the Circle -> ";
	cin >> radius;
}
double circle::get_radius() {
	return radius;
}
double circle::Calculate_area() {

	return  PI * radius * radius;

}
double circle::Calculate_perimeter() {

	return 2 * PI * radius;

}
circle::circle(int radius, bool x, bool y, bool z)
{
	this->radius = radius;
	circleplane.set_x(x);
	circleplane.set_y(y);
	circleplane.set_z(z);

}
