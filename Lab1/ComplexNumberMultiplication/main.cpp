#include <iostream>
#include "ComplexNumber.cpp"

int main() {
    double real1, imaginary1, real2, imaginary2;

    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> real1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imaginary1;

    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> real2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imaginary2;

    ComplexNumber c1(real1, imaginary1);
    ComplexNumber c2(real2, imaginary2);

    ComplexNumber sum = c1.add(c2);
    ComplexNumber difference = c1.subtract(c2);
    ComplexNumber product = c1.multiply(c2);
    ComplexNumber quotient = c1.divide(c2);

    std::cout << "\nOriginal numbers:\n";
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    std::cout << "\nSum (c1 + c2):\n";
    std::cout << "c1 + c2 = " << sum << std::endl;

    std::cout << "\nDifference (c1 - c2):\n";
    std::cout << "c1 - c2 = " << difference << std::endl;

    std::cout << "\nProduct (c1 * c2):\n";
    std::cout << "c1 * c2 = " << product << std::endl;

    std::cout << "\nQuotient (c1 / c2):\n";
    std::cout << "c1 / c2 = " << quotient << std::endl;

    return 0;
}
