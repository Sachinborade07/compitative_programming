class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node -> left);
        
        int rightHeight = height(node -> right);
        
        return 1 + max(leftHeight, rightHeight);
        
    }
};

// This code is from geeks for geeks 
https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
