/*(COD 14)  69. Sqrt(x) (https://leetcode.com/problems/sqrtx/)*/

class Solution {
public:
    int mySqrt(int x) {
        
        long long s=1;
        long long e=x;
        long long ans;
        while(s<=e)
        {
            long long m=s+(e-s)/2;
            if(m*m <= x)
            {
                ans=m;
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return int(ans);
        
    }
};
