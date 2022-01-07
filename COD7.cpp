/*Given an integer x, return true if x is palindrome integer.
https://leetcode.com/problems/palindrome-number/*/



class Solution {
public:
    bool isPalindrome(int x) {
        
        long long rev=0;
        int temp=x;
        while(temp)
        {
            int t=temp%10;
            rev=rev*10+t;
            temp/=10;      
        }
        if(x==rev && x>=0)
        {
            return true;
        }
        return false;
    }
};
