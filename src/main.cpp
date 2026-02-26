#include <iostream>
#include <vector>
#include "BasicCalculator.h"
#include "ScientificCalculator.h"
#include "StatisticsCalculator.h"

using namespace std;

int main() {
    BasicCalculator basic;
    ScientificCalculator sci;
    StatisticsCalculator stats;
    int choice;

    do {
        cout << "\n=== Modular Calculator Menu ===\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "5. Square Root\n6. Power\n7. Sine\n8. Cosine\n9. Tangent\n";
        cout << "10. Mean\n11. Median\n12. Variance\n13. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double a, b;
        vector<double> data;
        int n;

        switch (choice) {
            case 1: cout << "Enter two integers: "; cin >> a >> b; cout << "Result: " << basic.add(a, b) << endl; break;
            case 2: cout << "Enter two integers: "; cin >> a >> b; cout << "Result: " << basic.subtract(a, b) << endl; break;
            case 3: cout << "Enter two integers: "; cin >> a >> b; cout << "Result: " << basic.multiply(a, b) << endl; break;
            case 4: cout << "Enter two integers: "; cin >> a >> b; 
                    try { cout << "Result: " << basic.divide(a, b) << endl; } 
                    catch (const runtime_error& e) { cerr << "Error: " << e.what() << endl; } 
                    break;
            case 5: cout << "Enter a number: "; cin >> a; 
                    try { cout << "Result: " << sci.squareRoot(a) << endl; } 
                    catch (const runtime_error& e) { cerr << "Error: " << e.what() << endl; } 
                    break;
            case 6: cout << "Enter base and exponent: "; cin >> a >> b; cout << "Result: " << sci.power(a, b) << endl; break;
            case 7: cout << "Enter angle in radians: "; cin >> a; cout << "Result: " << sci.sine(a) << endl; break;
            case 8: cout << "Enter angle in radians: "; cin >> a; cout << "Result: " << sci.cosine(a) << endl; break;
            case 9: cout << "Enter angle in radians: "; cin >> a; cout << "Result: " << sci.tangent(a) << endl; break;
            case 10: cout << "Enter number of data points: "; cin >> n; 
                     data.resize(n); for (int i=0; i<n; i++) cin >> data[i]; 
                     cout << "Mean: " << stats.mean(data) << endl; break;
            case 11: cout << "Enter number of data points: "; cin >> n; 
                     data.resize(n); for (int i=0; i<n; i++) cin >> data[i]; 
                     cout << "Median: " << stats.median(data) << endl; break;
            case 12: cout << "Enter number of data points: "; cin >> n; 
                     data.resize(n); for (int i=0; i<n; i++) cin >> data[i]; 
                     cout << "Variance: " << stats.variance(data) << endl; break;
            case 13: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 13);

    return 0;
}
