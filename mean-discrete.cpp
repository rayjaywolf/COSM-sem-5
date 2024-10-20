#include <iostream>
using namespace std;

int main() {
    int n, N =0;
    float sum = 0.0, mean = 0.0;
    
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    // Declare arrays to store the series elements and their frequencies
    float X[n], f[n];

    // Input the series elements and their corresponding frequencies
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << "th variable of series: ";
        cin >> X[i];
        cout << "Enter the frequency of " << X[i] << ": ";
        cin >> f[i];
        sum += X[i] * f[i];
        N += f[i];
    }

  

    mean = sum / N;


    cout << "The mean of the discrete series is: " << mean << endl;

    return 0;
}
