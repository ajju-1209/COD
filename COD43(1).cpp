/*COD day 43 (2155. All Divisions With the Highest Score of a Binary Array)*/

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
     
        vector<int> zero;
        int z=0;
        for(auto x:nums)
        {
           // zero.push_back(z);
            if(x==0) z++;
            zero.push_back(z);
        }
        vector<int> one;
        int o=0;
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==1) o++;
            one.push_back(o);
        }
        reverse(one.begin(),one.end());
        int h=-1;
        unordered_map<int,vector<int>> m;
        for(int i=0;i<=n;i++)
        {
            if(i==0) 
            {
                h=one[i];
                m[h].push_back(i);
                continue;
            }
            if(i==n)
            {
                if(zero[n-1]>=h)
                {
                    h=zero[n-1];
                    m[zero[n-1]].push_back(i);
                }
                continue;
            }
            if(zero[i-1]+one[i]>=h)
            {
                h=zero[i-1]+one[i]; 
                m[zero[i-1]+one[i]].push_back(i);
            }
            
        }
        return m[h];
    }
};
