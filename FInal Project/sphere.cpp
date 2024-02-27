#include "sphere.h"
sphere::sphere(float radius, bool x, bool y, bool z) {
	this->radius = radius;
	sphereplane.set_x(x);
	sphereplane.set_y(y);
	sphereplane.set_z(z);


}
void sphere::manualdisplay_volume(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_volume();

}
void sphere::manualdisplay_surfacearea(int i) {
	cout << warehouse::arr_of_shapes1[i]->Calculate_surface_area();

}
void sphere::set_radius(float radius) {
	this->radius = radius;
}
double sphere::get_radius() {
	return radius;
}
double sphere::Calculate_surface_area() {

	return  4 * PI * radius * radius;
}
double sphere::Calculate_volume() {

	return (4 / 3) * PI * radius * radius;

}
void sphere::display() {
	cout << "The surface area of sphere is -> ";
	cout << Calculate_surface_area() << endl;
	cout << "The volume  of sphere is -> ";

	cout << Calculate_volume() << endl;
	displayplanecoord();
	cout << "___________________________________________" << endl;

}
