#include <iostream>
#include <cmath>
using namespace std;

void sdInd(int n, float x[]) {
    double sumX = 0, sumXsqr = 0, sd = 0;

    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> x[i];
        sumX += x[i];
        sumXsqr += x[i] * x[i];
    }

    sd = sqrt((sumXsqr / n) - pow((sumX / n), 2));
    cout << "Standard Deviation: " << sd << endl;
}

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;

    float x[n];
    sdInd(n, x);

    return 0;
}
