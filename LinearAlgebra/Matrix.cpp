#include "Matrix.h"


void Matrix::setMatrix(std::vector<std::vector<int>> matrix) {
	this->matrix = matrix;
}

int& Matrix::at(int x, int y) {
	return matrix[x][y];
}

//Vector Matrix::operator*(Vector vec) {
//	Vector returnVector(vec.getX()*at(0,0) + vec.getY()*at(0,1) + vec.getZ()*at(0,2) + vec.getW()* at(0,3), vec.getX() * at(1, 0) + vec.getY() * at(1, 1) + vec.getZ() * at(1, 2) + vec.getW() * at(1, 3), vec.getX() * at(2, 0) + vec.getY() * at(2, 1) + vec.getZ() * at(2, 2) + vec.getW() * at(2, 3), vec.getX() * at(3, 0) + vec.getY() * at(3, 1) + vec.getZ() * at(3, 2) + vec.getW() * at(3, 3));
//}

Matrix Matrix::generateIdentityMatrix() {
	std::vector<int> temp(4, 0);
	std::vector<std::vector<int>> identityMatrix;
	Matrix matrix;
	for (int i = 0; i < 4; i++) {
		temp[i] = 1;
		identityMatrix.push_back(temp);
		temp[i] = 0;
	}
	matrix.setMatrix(identityMatrix);
	return matrix;
}
bool operator == (Matrix leftOne, Matrix rightOne) {
	bool isEqual{ true };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (leftOne.at(i, j) != rightOne.at(i, j)) {
				isEqual = false;
			}
		}
	}
	return isEqual;
}
