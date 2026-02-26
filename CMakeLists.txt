cmake_minimum_required(VERSION 3.10)
project(ModularCalculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/BasicCalculator.cpp
    src/ScientificCalculator.cpp
    src/StatisticsCalculator.cpp
)

add_executable(modular_calc ${SOURCES})

# GoogleTest setup
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests
    src/main.cpp
    src/BasicCalculator.cpp
    src/ScientificCalculator.cpp
    src/StatisticsCalculator.cpp
    tests/test_basic.cpp
    tests/test_scientific.cpp
    tests/test_statistics.cpp
)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
add_test(NAME runTests COMMAND runTests)
