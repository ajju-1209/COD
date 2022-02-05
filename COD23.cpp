/*COD 23 (2011. Final Value of Variable After Performing Operations)*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int n=o.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(o[i][0]=='+' )
            {
                ++ans;
            }
            else if(o[i][0]=='-')
            {
                --ans;
            }
            else if(o[i][0]=='X' && o[i][1]=='+')
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        return ans;
    }
};
