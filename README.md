# Templates

This lab is a review of C++ templates and operator overloading. We will build a class that represents a two-demensional [matrix](https://en.wikipedia.org/wiki/Matrix_(mathematics)). The class should be generic so that its elements can be any type: integers, floating point, or even a custom class.

A class template called `Matrix` is provided for you. The template accepts three values describing the matrix: the type of elements, the number of rows, and the number of columns. For example, a 4x3 matrix of floating point values would be defined as `Matrix<float, 4, 3>`.

## Requirements

To complete the lab:

1. Add a custom constructor that takes a single value as input and initializes all elements in the matrix to that value.
2. Implement the `+` operator so that two matrices can be added together to produce a matrix sum. (The sum of a matrix is simply each element of one matrix added to the corresponding element of another matrix.)
3. Implement the `==` operator so that two matrices can be compared for equality. (Two matrices are equal when each of their corresponding elements is equal.)
4. Implement the stream insertion operator (`<<`) so that the matrix can be printed to an output stream such as `cout`. Each row of the matrix should be separated by newlines.

## Testing

Test your code in `main`. For example, you could instantiate a 4x3 matrix of `float` elements initialized to a floating-point value of your choice, then print it:

    Matrix<float, 4, 3> matrix(1.2);
    cout << matrix;

This should produce:

    1.2 1.2 1.2 1.2 
    1.2 1.2 1.2 1.2 
    1.2 1.2 1.2 1.2 

You can also test the `+` and `==` operators this way.

When your implementation is complete and working properly, fill in the empty unit tests provided in `matrix_test.cpp`. Even though you already tested and debugged the code, adding unit tests is a great way to make sure that if you ever come back and change something, the code will continue to work correctly.
