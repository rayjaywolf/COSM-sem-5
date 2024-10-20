#include <iostream>
#include <iomanip> // For setting decimal precision
using namespace std;

int main() {
    int n, classInterval;
    float N = 0.0, sumFM = 0, mean, l;

    cout<<"Enter the n : ";
    cin>>n;
    cout<<"Enter the lower limit of first class : ";
    cin>>l;
    cout<<"Enter the class interval : ";
    cin>>classInterval;

    float lowerLimit[n], upperLimit[n];
    float frequencies[n];
    float midVlaue[n]; 
    float fm[n];

    for(int i = 0; i<n; i++){
        lowerLimit[i] = l;
        upperLimit[i] = l+classInterval;
        l = l+classInterval;
        cout << "Enter the frequency for class " << i + 1 << " (" << lowerLimit[i] << " - " << upperLimit[i] << "): ";
        cin >> frequencies[i];
        midVlaue[i] = (lowerLimit[i]+upperLimit[i])/2;
        fm[i] = midVlaue[i]* frequencies[i];
        N += frequencies[i];
        sumFM += fm[i];
    }

    cout<<endl<<"Data : "<<endl<<endl;
    for(int i = 0; i<n; i++){
        cout<<"C.I. : "<<lowerLimit[i]<<" - "<<upperLimit[i]<< " and f : " <<frequencies[i] <<" and m : "<<midVlaue[i]<<" amd fm : "<<fm[i]<<endl;
    }

    cout<<"N : "<<N<<endl;
    cout<<"sum of fm : "<<sumFM<<endl;
    mean = sumFM/N;
    cout<<"Mean of the entered continuous series is : " << mean;
    return 0;
}
