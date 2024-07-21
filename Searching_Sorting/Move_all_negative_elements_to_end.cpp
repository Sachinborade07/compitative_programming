class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int> positive;
        vector<int> negative;
        
        
        for(int num: arr){
            if(num>=0){
                positive.push_back(num);
            }
            else{
                negative.push_back(num);
            }
        }
        positive.insert(positive.end(), negative.begin(),negative.end());
        arr = positive;
        
    }
    
};
// This code is form geeks for geeks 
https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
