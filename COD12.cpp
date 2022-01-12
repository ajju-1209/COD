/* 125. Valid Palindrome(https://leetcode.com/problems/valid-palindrome/)*/

class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.length();
        string temp="";
        for(int i=0;i<n;i++)
        {
            if( ('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z') )
            {
                temp+=tolower(s[i]);
            }
            else if('0'<=s[i] && s[i]<='9')
            {
                temp+=s[i];
            }
        }
        n=temp.length();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(temp[i]!=temp[j])
            {
                return false;
            }
            i++,j--;
        }
        return true;
    }
};


