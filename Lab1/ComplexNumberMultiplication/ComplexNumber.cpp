#include <iostream>
#include <string>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    ComplexNumber add(const ComplexNumber& other) const {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }

    ComplexNumber subtract(const ComplexNumber& other) const {
        double newReal = real - other.real;
        double newImaginary = imaginary - other.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }

    ComplexNumber multiply(const ComplexNumber& other) const {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(newReal, newImaginary);
    }

    ComplexNumber divide(const ComplexNumber& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double newReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return ComplexNumber(newReal, newImaginary);
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }
};
