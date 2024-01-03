#pragma once

#include <ostream>

template <typename T, int ROWS, int COLS>
class Matrix {
    T matrix[ROWS][COLS];
public:

    Matrix() : Matrix({}) {}

    Matrix(T value) {
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                matrix[row][col] = value;
            }
        }
    }

    Matrix operator+(const Matrix &rhs) const {
        Matrix sum;
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                sum.matrix[row][col] = matrix[row][col] + rhs.matrix[row][col];
            }
        }
        return sum;
    }

    bool operator==(const Matrix<T, ROWS, COLS>& rhs) const {
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                if (matrix[row][col] != rhs.matrix[row][col]) {
                    return false;
                }
            }
        }
        return true;
    }

    friend std::ostream &operator<<(std::ostream &strm, const Matrix<T, ROWS, COLS> &obj) {
        for (int row = 0; row < ROWS; row++) {
            for (int col = 0; col < COLS; col++) {
                strm << obj.matrix[row][col] << " ";
            }
            strm << std::endl;
        }
        return strm;
    }
};
