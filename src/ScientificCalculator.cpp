#include "ScientificCalculator.h"
#include <cmath>
#include <stdexcept>

double ScientificCalculator::squareRoot(double x) {
    if (x < 0) throw std::runtime_error("Square root of negative number!");
    return std::sqrt(x);
}

double ScientificCalculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double ScientificCalculator::sine(double angleRadians) { return std::sin(angleRadians); }
double ScientificCalculator::cosine(double angleRadians) { return std::cos(angleRadians); }
double ScientificCalculator::tangent(double angleRadians) { return std::tan(angleRadians); }
