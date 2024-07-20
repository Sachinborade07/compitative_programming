class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function

    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
      // sort the array 
        sort(arr+l,arr+r+1);
        
        return arr[l+k-1];
    }
};

// This is the question from geeks for geeks
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
