// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     float sum = 0.0, mean = 0.0;
    
//     cout << "Enter the number of elements in the series: ";
//     cin >> n;

//     // Declare arrays to store the series elements and their frequencies
//     float series[n];
//     int frequency[n];

//     // Input the series elements and their corresponding frequencies
//     for (int i = 0; i < n; i++) {
//         cout << "Enter the " << i + 1 << "th number of the series: ";
//         cin >> series[i];
//         cout << "Enter the frequency of " << series[i] << ": ";
//         cin >> frequency[i];
//     }

//     // Calculate the sum of (value * frequency) and the total frequency
//     int totalFrequency = 0;
//     for (int i = 0; i < n; i++) {
//         sum += series[i] * frequency[i];
//         totalFrequency += frequency[i];
//     }

//     // Calculate the mean
//     if (totalFrequency != 0) {
//         mean = sum / totalFrequency;
//     } else {
//         cout << "Total frequency is zero, cannot calculate mean." << endl;
//         return 1;
//     }

//     cout << "The mean of the discrete series is: " << mean << endl;

//     return 0;
// }


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
