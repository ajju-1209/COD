/*(Day 40)  15. 3Sum(leetcode)*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<3) return v;
        if(nums[0]>0 || nums[n-1]<0) return v;
        
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1,h=n-1;
            while(l<h)
            {
                if(h<n-1 && nums[h]==nums[h+1])
                {
                    h--;
                    continue;
                }
                int sum=nums[i]+nums[l]+nums[h];
                if(sum==0) 
                {
                    v.push_back({nums[i],nums[l],nums[h]});
                    l++,h--;
                }
                else if(sum<0) l++;//Make low pointer less negative
                else if(sum>0) h--;//Make high pointer less positive
            }
        }
        return v;
    }
};
