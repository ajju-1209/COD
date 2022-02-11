/*COD (33 problem) 1160. Find Words That Can Be Formed by Characters(https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/)*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    
        unordered_map<char,int> m1;
        //storing chars in hashmap
        for(auto x: chars)
        {
            m1[x]++;
        }
        string ans="";
        for(auto word:words)
        {
            unordered_map<char,int> m2;
            bool flag=true;
            for(auto x:word)
            {
                m2[x]++;
                if(m1[x]<m2[x])
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans+=word;
            
        }
        return ans.length();
        
    }
};
