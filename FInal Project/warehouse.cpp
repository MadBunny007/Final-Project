#include "warehouse.h"

void warehouse::displayallshapes(int i) {

	if (i == 1) {
		for (const auto& elem : arr_of_shapes)
		{

			cout << "Id " << elem.first << " :-> ";

			auto it = arr_of_shapes.find(elem.first);
			if (it != arr_of_shapes.end()) {
				// Update the existing circle with the new radius
				circle* existingCircle = dynamic_cast<circle*>(it->second);
				square* existingsquare = dynamic_cast<square*>(it->second);
				sphere* existingsphere = dynamic_cast<sphere*>(it->second);
				cube* existingcube = dynamic_cast<cube*>(it->second);

				if (existingCircle) {

					cout << " Shape : circle \n";

					elem.second->displayplanecoord();
					cout << '\n';

				}
				else if (existingsquare) {
					cout << "Shape : Square \n";
					elem.second->displayplanecoord();
					cout << '\n';
				}

			}



			elem.second->display();
			cout << "\n------------------------------\n";
		}
	}
	else {
		for (const auto& elem : arr_of_shapes1)
		{

			cout << "Id " << elem.first << " :-> ";

			auto it = arr_of_shapes1.find(elem.first);
			if (it != arr_of_shapes1.end()) {
				// Update the existing circle with the new radius
				circle* existingCircle = dynamic_cast<circle*>(it->second);
				square* existingsquare = dynamic_cast<square*>(it->second);
				sphere* existingsphere = dynamic_cast<sphere*>(it->second);
				cube* existingcube = dynamic_cast<cube*>(it->second);


				if (existingsphere) {
					cout << "Shape :Sphere \n";
					elem.second->displayplanecoord();
					cout << '\n';
				}
				else if (existingcube) {
					cout << "Shape :Cube \n";
				}
			}



			elem.second->display();
			cout << "\n------------------------------\n";
		}
	}
}
void warehouse::addsquare() {



	int id;
	cout << "Enter Your Id -> ";
	cin >> id;
	int side;

	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}







	cout << "enter the side -> ";
	cin >> side;
	arr_of_shapes[id] = new square(side, x, y, z);
	arr_of_shapes[id]->display();


}
void warehouse::addcircle() {

	int id;
	cout << "Enter Your Id -> ";
	cin >> id;
	int radius;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}

	cout << "enter the radius -> ";
	cin >> radius;
	arr_of_shapes[id] = new circle(radius, x, y, z);
	arr_of_shapes[id]->display();

}
void warehouse::addsphere() {
	cout << "Enter Your Id -> ";
	int id;
	cin >> id;
	float radius;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}

	cout << "enter the radius -> ";
	cin >> radius;
	arr_of_shapes1[id] = new sphere(radius, x, y, z);
	arr_of_shapes1[id]->display();
}
void warehouse::addcube() {

	int id;
	int side;
	cout << "Enter Your Id -> ";
	cin >> id;
	int x;
	int y;
	int z;
	bool validentry = false;
	while (!validentry) {
		cout << "is square is present in x plane?\n0-->No      1-->Yes " << endl;
		cin >> x;
		if (x == 0 || x == 1) {
			validentry = true;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in y plane?\n0-->No      1-->Yes " << endl;
		cin >> y;
		if (y == 0 || y == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }
	}
	validentry = false;

	while (!validentry) {
		cout << "is square is present in z plane?\n0-->No      1-->Yes " << endl;
		cin >> z;
		if (z == 0 || z == 1) {
			break;
		}
		else { cout << "Please Enter Valid No\n"; }

	}
	cout << "enter the side-> ";
	cin >> side;
	arr_of_shapes1[id] = new cube(side, x, y, z);
	arr_of_shapes1[id]->display();

}
void warehouse::addsquare(int id) {


	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		square* existingsquare = dynamic_cast<square*>(it->second);
		if (existingsquare) {

			int side;
			cout << "Enter the new radius for the circle: ";
			cin >> side;
			existingsquare->set_side(side);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a square." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}


}
void warehouse::addcircle(int id) {





	// Check if the shape exists in the map
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		circle* existingCircle = dynamic_cast<circle*>(it->second);
		if (existingCircle) {
			int radius;
			cout << "Enter the new radius for the circle: ";
			cin >> radius;
			existingCircle->set_radius(radius);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a circle." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}


}
void warehouse::addsphere(int id) {


	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		sphere* existingsphere = dynamic_cast<sphere*>(it->second);
		if (existingsphere) {
			int radius;
			cout << "Enter the new radius for the sphere: ";
			cin >> radius;
			existingsphere->set_radius(radius);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a sphere." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}
}
void warehouse::addcube(int id) {


	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		cube* existingcube = dynamic_cast<cube*>(it->second);
		if (existingcube) {
			int side;
			cout << "Enter the new radius for the sphere: ";
			cin >> side;
			existingcube->set_side(side);
			cout << "cube with ID " << id << " updated." << endl;
		}
		else {
			cout << "Shape with ID " << id << " is not a cube." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}

}
void warehouse::deleteshape() {

	int deleteIndex;
	cout << "Enter the index of the shape to delete: ";
	cin >> deleteIndex;

	if (arr_of_shapes.find(deleteIndex) != arr_of_shapes.end()) {
		delete arr_of_shapes[deleteIndex];
		arr_of_shapes.erase(deleteIndex);
		cout << "Entry Deleted" << endl;

	}
	else if (arr_of_shapes1.find(deleteIndex) != arr_of_shapes1.end()) {
		delete arr_of_shapes1[deleteIndex];
		arr_of_shapes1.erase(deleteIndex);
		cout << "Entry Deleted" << endl;
	}
	else {
		cout << "Invalid index." << endl;
	}
}
void warehouse::update() {

	int id;
	cout << "Enter the id for updation -> ";
	cin >> id;
	cout << "current values for your shape is : \n";
	arr_of_shapes[id]->display();
	cout << endl;
	auto it = arr_of_shapes.find(id);
	if (it != arr_of_shapes.end()) {
		// Update the existing circle with the new radius
		circle* existingCircle = dynamic_cast<circle*>(it->second);
		square* existingsquare = dynamic_cast<square*>(it->second);
		sphere* existingsphere = dynamic_cast<sphere*>(it->second);
		cube* existingcube = dynamic_cast<cube*>(it->second);

		if (existingCircle) {
			int radius;
			cout << "Enter the new radius for the circle: ";
			cin >> radius;
			existingCircle->set_radius(radius);
			cout << "Circle with ID " << id << " updated." << endl;
		}
		else if (existingsquare) {
			int side;
			cout << "Enter the new radius for the circle: ";
			cin >> side;
			existingsquare->set_side(side);
			cout << "Square with ID " << id << " updated." << endl;
		}
		else if (existingsphere) {
			int radius;
			cout << "Enter the new radius for the Sphere: ";
			cin >> radius;
			existingCircle->set_radius(radius);
			cout << "Sphere with ID " << id << " updated." << endl;
		}
		else if (existingcube) {
			int side;
			cout << "Enter the new side for the cube: ";
			cin >> side;
			existingcube->set_side(side);
			cout << "Cube with ID " << id << " updated." << endl;
		}
	}
	else {
		cout << "Shape with ID " << id << " not found." << endl;
	}



}
