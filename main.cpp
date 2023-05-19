//
// Created by Tanveer Gill on 2023-04-27.
//
#include "Matrix.h"

#include <iostream>
#include <vector>
#include <cmath>

int main ();
// TODO: remove two(?) of the following
float sigmoid (const float& z);
std::vector<float> sigmoid (const std::vector<float>& z); //vectorized
float sigmoid_prime (const float& z);
std::vector<float> sigmoid_prime (const std::vector<float>& z);

int main  () {
    Matrix x (4,3);
    std::cout << x;
    return 0;
}

float sigmoid (const float& z) {
    return 1 / (1 + std::exp(-z));
}


