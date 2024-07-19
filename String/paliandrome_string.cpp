class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int len = S.length();
	    int end = len - 1;
	    int start = 0;
	    while(start < end){
	        char ca = S.charAt(start);
	        char cb = S.charAt(end);
	        
	        if(ca != cb){
	            return 0;
	        }
	        start++;
	        end--;
	    }
	    return 1;
	}

};

# the problems statement is at 
https://www.geeksforgeeks.org/problems/palindrome-string0817/1
