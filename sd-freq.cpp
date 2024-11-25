#include <iostream>
#include <cmath>
using namespace std;

void calculateSD(int n, int seriesType) {
    double sumfx = 0, sumfxsqr = 0, N = 0, sd = 0;
    float f, first, interval, x; // Unified variables for both series types

    if (seriesType==1)
    { 
        cout << "First variable: ";
        cin >> first;
    }
    else
    {
        cout << "Lower Limit: ";
        cin >> first;
    }
    cout << "Interval : ";
    cin >> interval;

    for (int i = 0; i < n; i++) {
        if (seriesType == 1) { // Discrete Series
            x = first; // Set the current variable
            cout << "Frequency for variable " << x << ": ";
        } else if (seriesType == 2) { // Continuous Series
            float l = first;  // Lower limit
            float u = first + interval;  // Upper limit
            x = (l + u) / 2; // Midpoint calculation
            cout << "Frequency for class " << i + 1 << " (" << l << " - " << u << "): ";
        }
        cin >> f;
        sumfx += f * x;
        sumfxsqr += f * pow(x, 2);
        N += f;
        first += interval; // Increment the first variable by the interval
    }
    sd = sqrt((sumfxsqr / N) - pow((sumfx / N), 2));
    cout << "Standard Deviation: " << sd << endl;
}

int main() {
    int n, option;
    cout << "Series type:\n1. Discrete \n2. Continuous \nEnter choice: ";
    cin >> option;
    cout << "Number of elements: ";
    cin >> n;
    calculateSD(n, option);

    return 0;
}
