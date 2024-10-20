#include<iostream>
#include<algorithm> // To use sort function
using namespace std;

int main(){
    int n;
    float median;
    cout<<"Enter the number of elements in the series: ";
    cin>>n;
    float series[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter the "<<i<<"th element of the series: ";
        cin>>series[i];
    }

    // Sorting the series array
    sort(series, series + n);
//     First Parameter (series):
// This is a pointer to the beginning of the array, i.e., the starting address of the first element (series[0]).
// Second Parameter (series + n):
// This is a pointer to one past the last element of the array. In C++, ranges are typically specified as [start, end), meaning the end parameter is exclusive. Thus, series + n points to the memory location just beyond the last element of the array, ensuring the entire array is included in the sorting.
    
    // Finding the median
    if ((n % 2) == 0) {
        median = (series[(n / 2) - 1] + series[n / 2]) / 2;
    } else {
        median = series[(n + 1) / 2 - 1];
    }

    cout<<"Series (sorted): "<<endl;
    for(int i = 0; i < n; i++){
        cout<<series[i]<<"  ";
    }
    cout<<endl<<"Median: "<<median;
    
    return 0;
}
