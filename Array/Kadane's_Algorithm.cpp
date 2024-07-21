class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long max_sum = arr[0];
        long long current_sum = arr[0];
        
        
        for(size_t i=1;i<arr.size();i++){
            current_sum = max(static_cast<long long> (arr[i]), current_sum + arr[i]);
            
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
        
    }
};
# this code is from geeks for geeks 
https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
