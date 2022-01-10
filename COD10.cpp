/*1876. Substrings of Size Three with Distinct Characters(https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/)*/



class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n=s.length();
        if(n<3) return 0;
        int i=0,j=2;
        int c=0;
        while(j<n)
        {
            if(s[i]!=s[j] && s[i]!=s[i+1] && s[i+1]!=s[j] )
            {
                c++;
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        return c;
    }
};
