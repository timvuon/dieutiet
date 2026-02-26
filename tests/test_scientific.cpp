#include "ScientificCalculator.h"
#include <gtest/gtest.h>
#include <cmath>

TEST(ScientificCalculatorTest, SquareRoot) {
    ScientificCalculator calc;
    EXPECT_DOUBLE_EQ(calc.squareRoot(16), 4.0);
}

TEST(ScientificCalculatorTest, NegativeSquareRoot) {
    ScientificCalculator calc;
    EXPECT_THROW(calc.squareRoot(-1), std::runtime_error);
}
