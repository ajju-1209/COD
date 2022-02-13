/*COD 35 problem(1805. Number of Different Integers in a String)https://leetcode.com/problems/number-of-different-integers-in-a-string/*/

class Solution {
public:
    int numDifferentIntegers(string w) {
        unordered_set<string> s;
        for(int i=0;i<w.size();)
        {
            if(w[i]<=57 && w[i]>=48)
            {
                string st="";
                //Skipping trailing zeros
                while(w[i]=='0')
                {
                    i++;
                }
                while(w[i]<=57 && 48<=w[i])
                {
                    st+=w[i];
                    i++;
                }
                s.insert(st);//in case of 00 or 0 or 0000 .. empty string will be insered
            }
            else
            {
                i++;
            }
        }
        return s.size();
        }
};
