#include <iostream>
#include <cmath>    // For log() and exp() functions
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int n;
    double sumFLogX = 0.0, geometricMean, N = 0;

    // Input number of elements
    cout << "Enter the number of elements (n): ";
    cin >> n;
    float frequencies[n]; // Array to hold frequencies
    float x; // To hold the variable value

    // Loop to input frequencies and calculate sum of f*log(x)
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << "th variable of series: ";
        cin>>x; // Calculate current variable
        cout << "Enter the frequency for variable " << x << ": ";
        cin >> frequencies[i];

        // Calculate sum of f*log(x)
        sumFLogX += frequencies[i] * log(x);
        N += frequencies[i]; // Sum of frequencies
    }

    // Calculate the geometric mean using the formula:
    geometricMean = exp(sumFLogX / N);

    cout << "Geometric Mean of the entered discrete frequency distribution is: " << geometricMean << endl;

    return 0;
}
