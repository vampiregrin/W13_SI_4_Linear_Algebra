#pragma once
class Vector {
	int x;
	int y;
	int z;
	int w;
public:
	Vector();
	Vector(int x, int y, int z, int w);
	int getX();
	int getY();
	int getZ();
	int getW();
	Vector operator+(Vector vec);
	Vector operator-(Vector vec);
	int dotProduct(Vector vec);
	Vector operator*(int scalar);
	Vector operator/(int scalar);
	friend bool operator == (Vector leftOne, Vector rightOne);
	friend bool operator != (Vector leftOne, Vector rightOne);



};