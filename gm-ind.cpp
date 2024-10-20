#include <iostream>
#include <cmath>    // For log() and exp() functions
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int n;
    double sumLogX = 0.0, geometricMean;

    cout << "Enter the number of elements (n): ";
    cin >> n;

    float x[n]; // Array to hold the values of the series

    for (int i = 0; i < n; i++) {
        cout << "Enter value for x" << i + 1 << ": ";
        cin >> x[i];
        
        // Calculate the logarithm of xi and add to the sum
        sumLogX += log(x[i]);
    }

    // Calculate the geometric mean (antilog of the average of the log values)
    geometricMean = exp(sumLogX / n);

    cout << fixed << setprecision(5); // Set precision for output
    cout << "Geometric Mean of the entered individual series is: " << geometricMean << endl;

    return 0;
}
