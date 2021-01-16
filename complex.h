#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

struct complexNum {
    double real;
    double img;
};

complexNum operator + (const complexNum& x, const complexNum& y);
void operator += (complexNum& x, const complexNum& y);

complexNum operator - (const complexNum& x, const complexNum& y);
void operator -= (complexNum& x, const complexNum& y);

complexNum operator * (const complexNum& x, const complexNum& y);
void operator *= (complexNum& x, const complexNum& y);

complexNum operator / (const complexNum& x, const complexNum& y);
void operator /= (complexNum& x, const complexNum& y);

std::ostream& operator << (std::ostream& result, const complexNum& x);

#endif //COMPLEX_COMPLEX_H
