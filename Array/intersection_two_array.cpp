class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int> setA(a,a+n);
        unordered_set<int> intersectionSet;
        
        // Traverse the second array 
        for(int i=0;i<m;i++){
            if(setA.find(b[i]) != setA.end()){
                intersectionSet.insert(b[i]);
            }
        }
        return intersectionSet.size();
    }
};

// This code is form geeks for geeks 
https://www.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1
