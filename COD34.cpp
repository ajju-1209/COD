/*COD (34 problem) 242. Valid Anagram(https://leetcode.com/problems/valid-anagram/)*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        unordered_map<char,int> m1,m2;
        for(auto x:s)
        {
            m1[x]++;
        }
        for(auto x:t)
        {
            m2[x]++;
        }
        if(m1==m2) return true;
        return false;
    }
};
