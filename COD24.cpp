/*COD 24(1935. Maximum Number of Words You Can Type) https://leetcode.com/problems/maximum-number-of-words-you-can-type/*/

class Solution {
public:
    int canBeTypedWords(string t, string b) {
       
        int n=t.size();
        unordered_set<char> s;
        for(int i=0;i<b.size();i++)
        {
            s.insert(b[i]);
        }
        
        int flag=0;
        int wc=0;
        for(int i=0;i<n;i++)
        {
           
            if(t[i]!=' ' && flag==0)
            {
                if(s.find(t[i]) != s.end() )
                {
                    flag=1;
                }
            }
            else if(t[i]==' ')
            {
                if(flag==0)
                {
                    wc++;
                }
                else
                {
                    flag=0;
                }
            }
            if(i==n-1 && flag==0)
            {
                wc++;
            }
        }
        return wc;
    }
};
