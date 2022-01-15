/*(COD 15)  Find Pair Given Difference */

// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int s, int n){
    //code
    sort(arr,arr+s);
    for(int i=0;i<s;i++)
    {
        int start=0,end=s-1;
        int temp=arr[i];
        while(start<=end)
        {
            int mid =start+(end-start)/2;
            if(n+temp==arr[mid])
            {
                return true;
            }
            else if(n+temp>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return false;
    
}
