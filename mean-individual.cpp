#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0;
    
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    float series[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << "th number of the series: ";
        cin >> series[i];
        sum += series[i];
    }

    cout << "Mean of the individual series is: " << sum / n;
    return 0;
}
