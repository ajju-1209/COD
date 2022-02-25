/*Day 47  1 - problem (sort an array(Merge sort)) (leetcode)*/

class Solution {
public:
    
  void Merge(vector<int> &v,int s,int e)
   {
       int m=s+(e-s)/2;
       int n1=m-s+1,n2=e-m;
       int a1[n1],a2[n2];
       int k=0;
       for(int i=s;i<=m;i++)
       {
           a1[k++]=v[i];
       }
       k=0;
       for(int i=m+1;i<=e;i++)
       {
           a2[k++]=v[i];
       }
       //merging back into original array
       int i=0,j=0;
       k=s;
       while(i<n1 && j<n2)
       {
           if(a1[i]>a2[j])
           {
                v[k++]=a2[j++];    
           }
           else
           {
               v[k++]=a1[i++];
           }
       }
       while(i<n1) v[k++]=a1[i++];
       while(j<n2) v[k++]=a2[j++];
   }
    
    
    void Divide(vector<int> &v,int s,int e)
    {
        //base case
        if(s>=e)//Only one element or no element is in array now
        {
            return;
        }
        int mid=s+(e-s)/2;
        Divide(v,s,mid);
        Divide(v,mid+1,e);
        Merge(v,s,e);
        
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
        
        Divide(nums,0,nums.size()-1);
        return nums;
        
        
    }
};
