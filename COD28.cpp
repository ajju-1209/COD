/*COD (28 problem) Find Missing And Repeating(gfg)*/

#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int i=0;
        //cyclic sort
        int a[2];
       
       while(i<n)
       {
           if(arr[i]==i+1)
           {
               i++;
           }
           else if(arr[i]==arr[arr[i]-1])
           {
               i++;
           }
           else
           {
               swap(arr[i],arr[arr[i]-1]);
           }
       }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                a[1]=i+1;
                a[0]=arr[i];
            }
        }
       // cout<<a[0]<<" "<<a[1]<<endl;
        int *p=&a[0];
        return p;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
