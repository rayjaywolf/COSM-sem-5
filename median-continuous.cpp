#include<iostream>
using namespace std;

int main(){
    int n, varCF, classInterval;
    float N, median, l = 0, medianClassL= 0, medianClassF = 0;
    cout<<"Enter the size of the series : ";
    cin>>n;
    cout<<"Enter the lower limit of first class : ";
    cin>>l;
    cout<<"Enter the class interval : ";
    cin>>classInterval;

    float cf[n], lowerLimit[n], upperLimit[n], f[n];
    for(int i = 0; i<n; i++){
        lowerLimit[i] = l;
        upperLimit[i] = l+classInterval;
        l = l+classInterval;
        cout << "Enter the frequency for class " << i + 1 << " (" << lowerLimit[i] << " - " << upperLimit[i] << "): ";
        cin >> f[i];
        N += f[i];
        cf[i] = cf[i-1]+f[i];
    }

   cout<<endl<<"Data : "<<endl<<endl;
    for(int i = 0; i<n; i++){
        cout<<"C.I. : "<<lowerLimit[i]<<" - "<<upperLimit[i]<< " and f : " <<f[i] <<" and CF : "<<cf[i]<<endl;
    }

    float findCF = (N/2);
    cout<<"N/2 : "<<findCF<<endl;

    for (int i = 0; i < n; i++){
        if (cf[i]>=findCF)
        {
            varCF = i;
            break;
        }
    }


    cout<<"position of the CF : "<<varCF + 1<<endl;
    cout<<"CF : "<<cf[varCF-1]<< endl;

    medianClassL = lowerLimit[varCF];
    medianClassF = f[varCF];
    cout<<"so we have : "<<endl;
    cout<<"l = "<<medianClassL<<" and cf : "<<cf[varCF]<<" and f : "<<medianClassF<<" class interval : " << classInterval << " and N/2 : "<<N/2<<endl<<"This implies : ";
    median = medianClassL + (((N/2)-cf[varCF-1])/medianClassF) * classInterval;
    cout<<"Median : " << median;
    return 0;
}
