#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the Pearson correlation coefficient
void calculateCorrelation(int n) {
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0; // Sums for calculations
    double x, y; // Variables for input

    // Collect data for both series
    for (int i = 0; i < n; i++) {
        cout << "Enter value for X[" << i + 1 << "]: ";
        cin >> x;
        cout << "Enter value for Y[" << i + 1 << "]: ";
        cin >> y;

        sumX += x;    // Sum of X
        sumY += y;    // Sum of Y
        sumXY += x * y; // Sum of X*Y
        sumX2 += x * x; // Sum of X^2
        sumY2 += y * y; // Sum of Y^2
    }

    // Calculate the correlation coefficient
    double numerator = (n * sumXY) - (sumX * sumY);
    double denominator = sqrt((n * sumX2 - sumX * sumX) * (n * sumY2 - sumY * sumY));

    if (denominator != 0) { // Check for division by zero
        double correlation = numerator / denominator;
        cout << "Pearson Correlation Coefficient: " << correlation << endl;
    } else {
        cout << "Denominator is zero, correlation cannot be calculated." << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of pairs in the series: ";
    cin >> n;

    // Call the function to calculate correlation
    calculateCorrelation(n);

    return 0;
}
