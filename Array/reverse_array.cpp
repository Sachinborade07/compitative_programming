#include <bits/stdc++.h>
using namespace std;

//reversing the array 
void reverseArr(int arr[], int n)
{
    int reversedArr[n];
    for (int i = 0; i < n; i++) {
    // this is our main logic in for loop
        reversedArr[i] = arr[n - i - 1];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n= sizeof(arr) / sizeof(arr[0]);

    reverseArr(arr, n);
    return 0;
}
