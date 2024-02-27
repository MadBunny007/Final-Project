#pragma once
class shapeplane
{
protected:

	bool x, y, z;

public:
	
	shapeplane() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	shapeplane(bool x, bool y, bool z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void set_x(bool x) {
		this->x = x;
	}
	void set_y(bool y) {
		this->y = y;
	}
	void set_z(bool z) {
		this->z = z;
	}
	bool get_x() {
		return x;
	}
	bool get_y() {
		return y;
	}
	bool get_z() {
		return z;
	}
};

