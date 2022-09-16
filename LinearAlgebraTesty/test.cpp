//#include "pch.h"
#include "../LinearAlgebra/vector.h"
#include "../LinearAlgebra/Matrix.h"
#include "gtest/gtest.h"

TEST(VectorTest, AdditionTest) {
	
	Vector vec1(1, 2, 3, 4);
	Vector vec2(2, 3, 4, 5);
	Vector vec3(3, 5, 7, 9);
	Vector vec4 = vec1 + vec2;
	EXPECT_EQ(vec3.getZ(), 7);
}

TEST(VectorTest, SubtractionTest) {
	Vector vec1(10, 5, 8, 3);
	Vector vec2(7, 4, 5, 2);
	Vector vec3(3, 1, 3, 1);
	Vector vec4 = vec1 - vec2;
	EXPECT_EQ(vec3, vec4);
}

TEST(VectorTest, ScalarMultiplicationTest) {
	Vector vec1(1, 2, 3, 4);
	Vector vec2(2, 4, 6, 8);
	Vector vec3 = vec1 * 2;
	EXPECT_EQ(vec2, vec3);
}

TEST(VectorTest, ScalarDivisionTest) {
	Vector vec1(5, 10, 25, 30);
	Vector vec2(1, 2, 5, 6);
	Vector vec3 = vec1 / 5;
	EXPECT_EQ(vec2, vec3);
}

TEST(VectorTest, DotProductTest) {
	Vector vec1(4, 5, 4, 3);
	Vector vec2(2, 9, 5, 6);
	int dotProduct = 4 * 2 + 5 * 9 + 4 * 5 + 3 * 6;
	EXPECT_EQ(vec1.dotProduct(vec2), dotProduct);
}

TEST(MatrixTest, AtMethod) {
	Matrix matrix;
	std::vector<std::vector<int>> testMatrix = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
	matrix.setMatrix(testMatrix);
	EXPECT_EQ(matrix.at(2, 3), 12);
	EXPECT_EQ(matrix.at(0, 0), 1);
	EXPECT_EQ(matrix.at(1, 2), 7);
	EXPECT_EQ(matrix.at(0, 3), 4);
}

TEST(MatrixTest, GeneratingIdentityMatrixTest) {
	std::vector<std::vector<int>> identityMatrix = { {1,0,0,0}, {0,1,0,0}, {0,0,1,0}, {0,0,0,1} };
	Matrix testMatrix;
	testMatrix.setMatrix(identityMatrix);
	EXPECT_EQ(testMatrix.generateIdentityMatrix(), identityMatrix);
}