#include "BasicCalculator.h"
#include <gtest/gtest.h>

TEST(BasicCalculatorTest, Add) {
    BasicCalculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(BasicCalculatorTest, DivideByZero) {
    BasicCalculator calc;
    EXPECT_THROW(calc.divide(10, 0), std::runtime_error);
}
