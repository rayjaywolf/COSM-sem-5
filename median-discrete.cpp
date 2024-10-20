#include<iostream>
using namespace std;
int main(){
    int n, varCF;
    cout<<"Enter the size of the series : ";
    cin>>n;
    float x[n], f[n], cf[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i +1<<"th variable of series : ";
        cin>>x[i];
        cout<<"Enter the frequency for "<<x[i]<<" : ";
        cin>>f[i];
        cf[i] = cf[i-1]+f[i];
    }
    
    for (int i = 0; i < n; i++){

        cout<<x[i]<<"   "<<f[i]<<"  "<<cf[i]<<endl;
    }

    float N = cf[n-1];
    cout<<endl<<"N : "<<N<<endl;

    //locating the cumulative frequency
    float findCF = ((N+1)/2);
    cout<<"N+1/2 : "<<findCF<<endl;
    
    for (int i = 0; i < n; i++){
        if (cf[i]>=findCF)
        {
            varCF = i;
            break;
        }
    }

    cout<<"position of the CF : "<<varCF + 1<<endl;
    cout<<"CF : "<<cf[varCF]<< endl;
    cout<<"Median : "<<x[varCF];
    return 0;
}