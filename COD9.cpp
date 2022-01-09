
//COD 9 (https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/)



class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        vector<int> v;
        int n=a.size();
        int s=0,e=n-1;
        while(s<=e)
        {
            if(a[s]+a[e]==t)
            {
                v.push_back(s+1);
                v.push_back(e+1);
                break;
            }
            else if(a[s]+a[e]>t)
            {
                e--;
            }
            else if(a[s]+a[e]<t)
            {
                s++;
            }
        }
        return v;
    }
};
