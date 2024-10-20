// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     float sum = 0.0, mean;
    
//     cout << "Enter the number of elements in the series: ";
//     cin >> n;

//     // Declare the array with size n
//     float series[n];

//     // Input the series elements
//     for (int i = 0; i < n; i++) {
//         cout << "Enter the " << i+1 << "th number of the series: ";
//         cin >> series[i];
//     }

//     // Output the series elements and calculate the sum
//     cout << "The series elements are:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << series[i] << endl;
//         sum += series[i]; // Corrected from series[1] to series[i]
//     }

//     cout << "Sum of the series: " << sum << endl;

//     mean = sum/n;
//     cout<<"Mean of the individual series is : "<<mean;
//     return 0;
// }

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
