/*COD(20 problem) 1356. Sort Integers by The Number of 1 Bits(https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/)*/


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int,int>> v;
        for(int i=0;i<arr.size();i++)
        {
            int t=arr[i];
            int c=0;
            while(t)
            {
                if(t&1)
                {
                    c++;
                }
                t=t>>1;
            }
            v.push_back(make_pair(c,arr[i]));
        }
        vector<int> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};
