#include <iostream>

class SquareRootCalculator {
public:
    double calculateSquareRoot(double number) {
        double guess = 1.0;  // Initial guess
        double epsilon = 1e-6;  // Tolerance for convergence

        while (abs(guess * guess - number) > epsilon) {
            guess = guess - (guess * guess -  number) / (2 * guess);  // Newton-Raphson formula
        }

        return guess;
    }
};
