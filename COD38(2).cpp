/*COD 38 day problem 2 (238. Product of Array Except Self leetcode)*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);
        int p=1,c=0;
        for(auto x: nums)
        {
            if(x==0 && c<2)
            {
                c++;
                continue;
            }
            if(c>=2) break;
            p*=x;
        }
        if(c>=2) return ans;
        if(c==1)
        {
           // cout<<"Hello"<<p<<endl;
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    ans[i]=p;
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                p/=nums[i];
                ans[i]=p;
                p*=nums[i];
            }
        }
        return ans;
    }
};
