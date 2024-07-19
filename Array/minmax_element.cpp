#include <bits/stdc++.h>
using namespace std;

// creting the struct pair 
struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[],int n){
    Pair minmax;
    
    // sorting the array 
    sort(arr,arr + n);

    // minimum value 
    minmax.min = arr[0];
    // maximum value 
    minmax.max = arr[n-1];

    return minmax;
}


int main()
{
    int arr[] = {1000,1,0,23,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr,n);

    cout << "Minimum element is " << minmax.min<<endl;
    cout << "Maximum element is " << minmax.max<< endl;

    return 0;
}
