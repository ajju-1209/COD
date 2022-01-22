/*COD(22 problem) 1009. Complement of Base 10 Integer(https://leetcode.com/problems/complement-of-base-10-integer/)*/


class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int p=1;
        if(n==0) return 1;
        while(n)
        {
            int last_digit=n&1;
            if(last_digit==1)
            {
                ans+=0;
            }
            else
            {
                ans+=p;
            }
            p=p*2;
            n=n>>1;
        }
        return ans;
    }
};
