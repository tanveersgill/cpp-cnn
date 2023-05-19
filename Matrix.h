//
// Created by Tanveer Gill on 2023-04-27.
//

#include <vector> //using vector as underlying ds, may change to array later
#ifndef CPP_CNN_MATRIX_H
#define CPP_CNN_MATRIX_H

class Matrix {

private:
    std::vector<std::vector<float>> matrix;
    int shape[2];
public:
    Matrix(int cols, int rows);
    ~Matrix();

public:
    Matrix operator* (const Matrix& rmatrix); //matrix-matrix or matrix-vector multiplication
    float hadamard (Matrix m2);
    double dot(Matrix x); //dot product
    Matrix transpose();

    friend std::ostream& operator<< (std::ostream& out, const Matrix& m);
};



#endif //CPP_CNN_MATRIX_H
