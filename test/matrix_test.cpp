#include <catch2/catch_test_macros.hpp>

#include "matrix.h"

typedef Matrix<int, 3, 3> Matrix3;

TEST_CASE("Matrices can be added together")
{
	Matrix3 m1(2);
	Matrix3 m2(3);
	Matrix3 sum;
	sum = m1 + m2;
	Matrix3 expected(5);
	REQUIRE(sum == expected);
}

TEST_CASE("Matrices can be compared for equality")
{
	Matrix3 m1(2);
	Matrix3 m2(3);
	Matrix3 m3(3);
	REQUIRE(m1 == m1);
	REQUIRE_FALSE(m1 == m2);
	REQUIRE(m2 == m3);
}
