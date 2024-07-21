class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> countMap;


        for(int num:nums){
            countMap[num]++;
            if(countMap[num] > 1){
                return num;
            }
        }
        return -1;
    }
};

// This code is from leet code
https://leetcode.com/problems/find-the-duplicate-number/
