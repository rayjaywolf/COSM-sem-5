#include <iostream>
#include <cmath>    // For log() and exp() functions
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int n;
    float lowerLimit, interval, N = 0.0;
    double sumFLogM = 0.0, geometricMean;

    // Input number of classes
    cout << "Number of classes (n): ";
    cin >> n;

    // Input lower limit of first class and class interval
    cout << "Lower Limit: ";
    cin >> lowerLimit;
    cout << "Class interval: ";
    cin >> interval;

    float frequencies[n]; // Array to hold frequencies
    float midValue; // To hold the mid-point of each class

    // Loop through each class to input frequencies and calculate sum of f*log(mid)
    for (int i = 0; i < n; i++) {
        float upperLimit = lowerLimit + interval; // Calculate the upper limit of the class
        midValue = (lowerLimit + upperLimit) / 2; // Calculate the midpoint

        cout << "Frequency for class " << i + 1 << " (" << lowerLimit << " - " << upperLimit << "): ";
        cin >> frequencies[i];

        // Calculate sum of f*log(midpoint)
        sumFLogM += frequencies[i] * log(midValue);
        N += frequencies[i]; // Sum of frequencies

        // Update the lower limit for the next class
        lowerLimit = upperLimit;
    }

    // Calculate the geometric mean using the formula:
    geometricMean = exp(sumFLogM / N);

    // Display the result
    cout << fixed << setprecision(5); // Set precision for output
    cout << "GM is: " << geometricMean << endl;

    return 0;
}
