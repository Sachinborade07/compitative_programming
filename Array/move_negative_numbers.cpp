#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            if(i != j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}

// for printing the array 
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    print(arr, n);
    return 0;
}

// This is the code from geeks for geeks
https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
