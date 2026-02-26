#include "StatisticsCalculator.h"
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <cmath>

double StatisticsCalculator::mean(const std::vector<double>& data) {
    if (data.empty()) throw std::runtime_error("No data provided!");
    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    return sum / data.size();
}

double StatisticsCalculator::median(std::vector<double> data) {
    if (data.empty()) throw std::runtime_error("No data provided!");
    std::sort(data.begin(), data.end());
    size_t n = data.size();
    if (n % 2 == 0) {
        return (data[n/2 - 1] + data[n/2]) / 2.0;
    } else {
        return data[n/2];
    }
}

double StatisticsCalculator::variance(const std::vector<double>& data) {
    if (data.empty()) throw std::runtime_error("No data provided!");
    double m = mean(data);
    double sumSq = 0.0;
    for (double val : data) {
        sumSq += (val - m) * (val - m);
    }
    return sumSq / data.size();
}
