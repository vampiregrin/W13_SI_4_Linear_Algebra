#include "vector.h"
Vector::Vector() {
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}
Vector::Vector(int x, int y, int z, int w) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}
int Vector::getX() {
	return x;
}
int Vector::getY() {
	return y;
}
int Vector::getZ() {
	return z;
}
int Vector::getW() {
	return w;
}
Vector Vector::operator+(Vector vec) {
	Vector vec1(vec.getX() + x, vec.getY() + y, vec.getZ() + z, vec.getW() + w);
	return vec1;
}
Vector Vector::operator-(Vector vec) {
	Vector vec1(x - vec.getX(), y - vec.getY(), z - vec.getZ(), w - vec.getW());
	return vec1;
}
int Vector::dotProduct(Vector vec) {
	return x * vec.getX() + y * vec.getY() + z * vec.getZ() + w * vec.getW();
}
Vector Vector::operator*(int scalar) {
	Vector vec1(scalar * x, scalar * y, scalar * z, scalar * w);
	return vec1;
}
Vector Vector::operator/(int scalar) {
	Vector vec1(x / scalar, y / scalar, z / scalar, w / scalar);
	return vec1;
}
bool operator == ( Vector& leftOne, Vector& rightOne) {
	bool isEqual{ true };

	if (leftOne.getX() != rightOne.getX() || leftOne.getY() != rightOne.getY() || leftOne.getZ() != rightOne.getZ() || leftOne.getW() != rightOne.getW()) {
		isEqual = false;
	}

	return isEqual;
}

bool operator!=(Vector leftOne, Vector rightOne) {
	bool isUnequal{ false };

	if (leftOne.getX() != rightOne.getX() || leftOne.getY() != rightOne.getY() || leftOne.getZ() != rightOne.getZ() || leftOne.getW() != rightOne.getW()) {
		isUnequal = true;
	}

	return isUnequal;
}