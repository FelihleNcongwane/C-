#include <iostream>
#include "SquareRootCalculator.cpp"

int main() {
    SquareRootCalculator calculator;

    double number;
    std::cout << "Enter a number to calculate its square root: ";
    std::cin >> number;

    double squareRoot = calculator.calculateSquareRoot(number);

    std::cout << "The square root of " << number << " is approximately " << squareRoot << std::endl;

    return 0;
}
