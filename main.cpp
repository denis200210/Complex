#include <iostream>
#include "complex.h"

int main() {
    Complex x, y;

    x.real = 2;
    x.imaginary = 4.2;
    y.real = 2;
    y.imaginary = 4;
    std::cout << x + y;
    return 0;