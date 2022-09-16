#pragma once
#include <iostream>
#include "vector.h"
#include "Matrix.h"
int main() {
	//std::vector<std::vector<int>> vec = { {1,2,3}, {4,5,6}, {7,8,9} };
	Matrix matrix;
	std::vector<std::vector<int>> vec;
	matrix.generateIdentityMatrix();

	return 0;
}