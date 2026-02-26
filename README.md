sudo apt-get install libgtest-dev
sudo apt-get install cmake
cd /usr/src/gtest
sudo cmake .
sudo make
sudo cp /lib/*.a /usr/lib
project-root/
├── include/
│   ├── BasicCalculator.h
│   ├── ScientificCalculator.h
│   └── StatisticsCalculator.h
├── src/
│   ├── main.cpp
│   ├── BasicCalculator.cpp
│   ├── ScientificCalculator.cpp
│   └── StatisticsCalculator.cpp
├── tests/
│   ├── test_basic.cpp
│   ├── test_scientific.cpp
│   └── test_statistics.cpp
├── CMakeLists.txt
└── README.md
mkdir build
cd build
cmake ..
make
ctest
Running tests...
Test project /path/to/build
    Start 1: runTests
1/1 Test #1: runTests ..................   Passed
