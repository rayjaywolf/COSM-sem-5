#include <iostream>
#include <cmath>    // For log() and exp() functions
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int n;
    float first, interval;
    double sumFLogX = 0.0, geometricMean, N = 0;

    // Input number of elements
    cout << "Enter the number of elements (n): ";
    cin >> n;

    // Input first variable and interval
    cout << "Enter the first variable: ";
    cin >> first;
    cout << "Enter the interval: ";
    cin >> interval;

    float frequencies[n]; // Array to hold frequencies
    float x; // To hold the variable value

    // Loop to input frequencies and calculate sum of f*log(x)
    for (int i = 0; i < n; i++) {
        x = first + i * interval; // Calculate current variable
        cout << "Enter the frequency for variable " << x << ": ";
        cin >> frequencies[i];

        // Calculate sum of f*log(x)
        sumFLogX += frequencies[i] * log(x);
        N += frequencies[i]; // Sum of frequencies
    }

    // Calculate the geometric mean using the formula:
    geometricMean = exp(sumFLogX / N);

    // Display the result
    cout << fixed << setprecision(5); // Set precision for output
    cout << "Geometric Mean of the entered discrete frequency distribution is: " << geometricMean << endl;

    return 0;
}
