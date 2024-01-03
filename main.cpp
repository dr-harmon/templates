#include "matrix.h"

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	Matrix<float, 4, 3> matrix(1.2);
	cout << matrix;

	return EXIT_SUCCESS;
}
