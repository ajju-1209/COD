
/*COD 19 DAY problem(169. Majority Element) https://leetcode.com/problems/majority-element/*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto i:m)
        {
            if(i.second> n/2)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};
