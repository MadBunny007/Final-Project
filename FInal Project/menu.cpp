#include "menu.h"
void menu::callmenu() {
	bool state = true;
	while (state) {
		warehouse w1;
		int choice;
		cout << "Choose an option:" << endl;
		cout << "1. Show Existing Data \n2. Add shape\n3. Update shape\n4. Delete shape\n5. Display shapes\n6. Search\n7. Exit" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "ID: 1, Shape: Circle, Area: " << 3.14 * 5 * 5 << ", Perimeter: " << 2 * 3.14 * 5 << endl;
			cout << "Square:" << endl;
			cout << "ID: 2, Shape: Square, Area: " << 5 * 5 << ", Perimeter: " << 4 * 5 << endl;
			cout << "Sphere:" << endl;
			cout << "ID: 3, Shape: Sphere, Surface Area: " << 4 * 3.14 * 5 * 5 << ", Volume: " << (4.0 / 3) * 3.14 * 5 * 5 * 5 << endl;
			cout << "Cube:" << endl;
			cout << "ID: 4, Shape: Cube, Surface Area: " << 6 * 5 * 5 << ", Volume: " << 5 * 5 * 5 << endl;


			break;
		case 2:
			int addChoice;
			cout << "Choose a shape to add:" << endl;
			cout << "1. Circle\n2. Square\n3. Sphere\n4. Cube" << endl;
			cin >> addChoice;


			switch (addChoice) {
			case 1:
				w1.addcircle();
				break;
			case 2:
				w1.addsquare();
				break;
			case 3:
				w1.addsphere();
				break;
			case 4:
				w1.addcube();
				break;
			default:
				cout << "Invalid choice." << endl;
			}
			break;
		case 3:
			w1.update();
			break;
		case 4:
			w1.deleteshape();
			break;
		case 5:
			cout << "Press 1 for 2D Shapes Data 2. for 3D Shapes Data -> ";
			int i;
			cin >> i;

			if (i == 1) {

				if (w1.arr_of_shapes.empty()) {
					cout << "No 2D shapes to display." << endl;
				}
				else {

					w1.displayallshapes(i);

				}
			}
			else {
				if (w1.arr_of_shapes1.empty()) {
					cout << "No 3D shapes to display." << endl;
				}
				else {

					w1.displayallshapes(i);

				}
			}
			break;
		case 6:
			cout << "      1.2D shape     \n      2.3D shape    \n";
			int no;
			cin >> no;
			int id;
			if (no == 1) {
				cout << "Enter ID to Search -> ";
				cin >> id;
				w1.arr_of_shapes[id]->display();
			}
			else {
				cout << "Enter ID to Search -> ";
				cin >> id;
				w1.arr_of_shapes1[id]->display();
			}

			break;
		case 7:
			cout << "Exiting program." << endl;
			// Clean up memory
			for (const auto& pair : w1.arr_of_shapes) {
				delete pair.second;
			}
			for (const auto& pair : w1.arr_of_shapes1) {
				delete pair.second;
			}
			state = false;
			break;
		default:
			cout << "Invalid choice." << endl;
			// Clear input buffer
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}