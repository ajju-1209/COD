/*COD(13 problem) 88. Merge Sorted Array(https://leetcode.com/problems/merge-sorted-array/)*/

class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        
        if(n==0 && m!=0) return;
        vector< int> temp(n+m,0);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(num1[i]<num2[j])
            {
                temp[k++]=num1[i++];
                
            }
            else
            {
                temp[k++]=num2[j++];
            }
        }
        while(i<m)
        {
            temp[k++]=num1[i++];
        }
        while(j<n)
        {
            temp[k++]=num2[j++];
        }
        
        
        for(int i=0;i<n+m;i++)
        {
            num1[i]=temp[i];
        }
        return ;
    }
};
