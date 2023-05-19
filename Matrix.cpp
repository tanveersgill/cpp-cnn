//
// Created by Tanveer Gill on 2023-04-27.
//
#include <iostream>
#include <exception>
#include "Matrix.h"

Matrix::Matrix (int cols, int rows) { // m x n
    this->matrix = std::vector<std::vector<float>>(cols, std::vector<float>(rows, 0));
    this->shape[0] = rows;
    this->shape[1] = cols;
}
Matrix::~Matrix () {
    delete this->matrix;
    this->matrix = nullptr;
}

Matrix Matrix::transpose() {
    // TODO: finish transpose operation
    Matrix* x = new Matrix(this ->rows,this->cols);
    for (int i{0}; i<)
}

Matrix operator* (const Matrix& rmatrix) {
    Matrix* result = new Matrix(0,0);
    return *result;
}

float hadamard (Matrix m2) {
    try {
        if (!( (this->cols == 1) && (m2.cols == 1) && (this->rows == m2.rows) )) {
            throw std::exception ("invalid matrices for hadamard product.")
        }
    } catch (const std::invalid_argument& e) {
        std::cout << e << std::endl;
    }


}


std::ostream& operator<< (std::ostream& out, const Matrix& m) {
    for(int i{0}; i < m.matrix[0].size(); ++i) {
        for(int j{0}; j < m.matrix.size(); ++j) {
            std::cout << m.matrix[i][j] << ",";
        }
        std::cout << std::endl;
    }
}
