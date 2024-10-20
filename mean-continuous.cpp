#include <iostream>
using namespace std;

int main() {
    int n, classInterval;
    float N = 0.0, sumFM = 0, mean, l, u;

    cout<<"Enter the n : ";
    cin>>n;
    cout<<"Enter the lower limit of first class : ";
    cin>>l;
    cout<<"Enter the class interval : ";
    cin>>classInterval;

    float f[n], m[n], fm[n];

    for(int i = 0; i<n; i++){
        u = l+classInterval;
        cout << "Enter the frequency for class " << i + 1 << " (" << l << " - " << u << "): ";
        cin >> f[i];
        m[i] = (l+u)/2;
        fm[i] = m[i]* f[i];
        N += f[i];  
        sumFM += fm[i];
        
        l = l+classInterval;
    }

    cout<<endl<<"N : "<<N<<endl;
    cout<<"sum of fm : "<<sumFM<<endl;
    mean = sumFM/N;
    cout<<"Mean of the entered continuous series is : " << mean;
    return 0;
}
