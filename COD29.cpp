/*COD (29 problem)724. Find Pivot Index https://leetcode.com/problems/find-pivot-index/*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int t=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(t==sum-nums[i])
            {
                ans=i;
                break;
            }
            else
            {
                t+=nums[i];
                sum-=nums[i];
            }
        }
        return ans;
    }
};
