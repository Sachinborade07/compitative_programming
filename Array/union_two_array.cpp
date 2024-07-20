class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
            unordered_set<int> unionSet;
            
            // inserting the first array in unordered set
            for(int num: arr1){
                unionSet.insert(num);
            }
            // inserting the second array in unordered set
            for(int num: arr2){
                unionSet.insert(num);
            }
            
            return unionSet.size();
            
        
    }
};

// This is the code from geeks for geeks 
https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
