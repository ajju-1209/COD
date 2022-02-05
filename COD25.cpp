/*COD 25(58. Length of Last Word) https://leetcode.com/problems/length-of-last-word/*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length();
        vector<int> v;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ' && c!=0)
            {
                v.push_back(c);
                c=0;         
            }
            else if(s[i]!=' ')
            {
                c++;
            }
            if(i==n-1 && c!=0)
            {
                v.push_back(c);
                c=0;
            }
        }
        int m=v.size();
        return v[m-1];
    }
};
