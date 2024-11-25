#include <iostream>
#include <cmath>    // For log() and exp() functions
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int n;
    float first, interval;
    double sumFLogX = 0.0, geometricMean, N = 0;

    // Input number of elements
    cout << "Number of elements (n): ";
    cin >> n;

    // Input first variable and interval
    cout << "First Variable: ";
    cin >> first;
    cout << "Interval: ";
    cin >> interval;

    float frequencies[n]; // Array to hold frequencies
    float x; // To hold the variable value

    // Loop to input frequencies and calculate sum of f*log(x)
    for (int i = 0; i < n; i++) {
        x = first + i * interval; // Calculate current variable
        cout << "Frequency for var " << x << ": ";
        cin >> frequencies[i];

        // Calculate sum of f*log(x)
        sumFLogX += frequencies[i] * log(x);
        N += frequencies[i]; // Sum of frequencies
    }

    // Calculate the geometric mean using the formula:
    geometricMean = exp(sumFLogX / N);

    cout << "GM is: " << geometricMean << endl;

    return 0;
}
