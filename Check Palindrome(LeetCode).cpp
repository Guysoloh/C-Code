/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

 

Example 1:

Input: x = 121
Output: true
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n= x;
        int remainder;
        long long rev=0;
        while(x!=0){
            remainder=x%10;
            x=x/10;
            rev=rev*10+remainder;
        }
        
        if(n==rev ){
            return true;
        }
        else{
            return false;
        }
        
    }
};
