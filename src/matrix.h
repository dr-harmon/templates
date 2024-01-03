#pragma once

#include <ostream>

template <typename T, int ROWS, int COLS>
class Matrix {
public:

    Matrix() : Matrix({}) {}

    Matrix operator+(const Matrix &rhs) const {
        Matrix sum;
        // TODO
        return sum;
    }

    bool operator==(const Matrix<T, ROWS, COLS>& rhs) const {
        // TODO
    }

    friend std::ostream &operator<<(std::ostream &strm, const Matrix<T, ROWS, COLS> &obj) {
        // TODO
        return strm;
    }
};
