#ifndef STATISTICSCALCULATOR_H
#define STATISTICSCALCULATOR_H

#include <vector>

class StatisticsCalculator {
public:
    double mean(const std::vector<double>& data);
    double median(std::vector<double> data);
    double variance(const std::vector<double>& data);
};

#endif
