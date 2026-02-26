#include "StatisticsCalculator.h"
#include <gtest/gtest.h>
#include <vector>

TEST(StatisticsCalculatorTest, Mean) {
    StatisticsCalculator stats;
    std::vector<double> data = {1, 2, 3, 4, 5};
    EXPECT_DOUBLE_EQ(stats.mean(data), 3.0);
}

TEST(StatisticsCalculatorTest, MedianOdd) {
    StatisticsCalculator stats;
    std::vector<double> data = {5, 1, 3};
    EXPECT_DOUBLE_EQ(stats.median(data), 3.0);
}
