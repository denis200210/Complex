#include <iostream>
#include "complex.h"

complexNum operator + (const complexNum& x, const complexNum& y) {
    complexNum result{};

    result.real = x.real + y.real;
    result.img = x.img + y.img;

    return result;
}

void operator += (complexNum& x, const complexNum& y) {
    x = x + y;
}


complexNum operator - (const complexNum& x, const complexNum& y) {
    complexNum result{};

    result.real = x.real - y.real;
    result.img = x.img - y.img;

    return result;
}

void operator -= (complexNum& x, const complexNum& y) {
    x = x - y;
}


complexNum operator * (const complexNum& x, const complexNum& y) {
    complexNum result{};

    result.real = x.real * y.real - x.img * y.img;
    result.img = x.real * y.img + x.img * y.real;

    return result;
}

void operator *= (complexNum& x, const complexNum& y) {
    x = x * y;
}


complexNum operator / (const complexNum& x, const complexNum& y) {
    complexNum result{};

    if (x.real == 0 && y.img == 0) {
        throw std:: invalid_argument("you can't divide by zero");
    }
    else {
        double d = y.real * y.real + y.img * y.img;
        result.real = (x.real * y.real + x.img * y.img) / d;
        result.img = (x.img * y.real - x.real * y.img) / d;

        return result;
    }
}

void operator /= (complexNum& x, const complexNum& y) {
    x = x / y;
}


std::ostream& operator << (std::ostream& result, const complexNum& x) {
    if (x.real == 0 && x.img == 0) {
        result << 0; }
    else {
        if (x.real != 0) {
            result << x.real;
            if (x.img > 0) { result << '+'; }
        }
        if (x.img != 0) {
            if (x.img == 1) { result << 'i'; }
            else if (x.img == -1) { result << "-i"; }
            else { result << x.img << 'i'; }
        }
    }

    return result;
}
