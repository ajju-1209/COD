/*Find peak element in given array(A peak element is an element that is strictly greater than its neighbors.)
https://leetcode.com/problems/find-peak-element/
*/



class Solution {
public:
    int findPeakElement(vector<int>& n) {
        
        int a=n.size();
        if(a==1 ) return 0;
        if(n[0]>n[1]) return 0;
        if(n[a-1]>n[a-2]) return a-1;
        int s=1;
        int e=a-2;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(n[m]>n[m-1] && n[m]>n[m+1])
            {
                return m;
            }
            else if(n[m]<n[m-1])
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
        }
        return 0;
    }
};
