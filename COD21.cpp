/*COD(21 Problem) 875. Koko Eating Bananas(https://leetcode.com/problems/koko-eating-bananas/)*/

class Solution {
public:
    #define ll long long 
    
    bool check(vector<int>& p,ll h,ll mid)
    {
        ll t=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]%mid==0)
            {
                t+=p[i]/mid;
            }
            else
            {
                t+=p[i]/mid +1;
            }
        }
        if(t<=h)
        {
            return true;
        }
        return false;
    }
    
    
    int minEatingSpeed(vector<int>& p, int h) {
        int n=p.size();
        ll s=1,e=0;
        for(int i=0;i<n;i++)
        {
            if(e<p[i])
            {
                e=p[i];
            }
        }
        ll ans;
        while(s<=e)
        {
            ll mid=s+(e-s)/2;
            if(check(p,h,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};
