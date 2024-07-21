class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<long long int,long long int> prefixSum;
        long long int cumulativeSum = 0;
        long long int zeroSumCount = 0;
        
        
        prefixSum[0] = 1;
        
        for(int i=0;i<n;i++){
            cumulativeSum += arr[i];
            
            if(prefixSum.find(cumulativeSum) != prefixSum.end()){
                zeroSumCount += prefixSum[cumulativeSum];
            }    
            prefixSum[cumulativeSum] ++;
        }   
        return zeroSumCount;
    }
    
};
// This is code from geeks for geeks 
https://www.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
