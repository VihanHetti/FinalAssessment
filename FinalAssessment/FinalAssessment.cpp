
#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

void Complex::Print() const {
    cout << real;
    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";
}

Complex Complex::operator+(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex& c) const {
    return Complex(
        real * c.real - imag * c.imag,
        real * c.imag + imag * c.real
    );
}

Complex Complex::operator*(double n) const {
    return Complex(real * n, imag * n);
}

Complex operator*(double n, const Complex& c) {
    return c * n;
}

Complex::operator double() const {
    return sqrt(real * real + imag * imag);
}
