/*(COD 27 problem) 881. Boats to Save People(https://leetcode.com/problems/boats-to-save-people/)*/

class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int n=p.size(),ans=0;
        sort(p.begin(),p.end());
        int i=0,j=n-1;
        while(i<=j)
        {
            ans++;
            if(p[i]+p[j]<=l)
            {
                i++;
            }
           j--;
        }
        return ans;
    }
};
