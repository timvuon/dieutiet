#include "BasicCalculator.h"
#include <stdexcept>

int BasicCalculator::add(int a, int b) { return a + b; }
int BasicCalculator::subtract(int a, int b) { return a - b; }
int BasicCalculator::multiply(int a, int b) { return a * b; }

double BasicCalculator::divide(int a, int b) {
    if (b == 0) throw std::runtime_error("Division by zero!");
    return static_cast<double>(a) / b;
}
