/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.*/
#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int s=0,mid=0,e=n-1;
        while(mid<=e)
        {
            if(a[mid]==0)
            {
                swap(a[mid++],a[s++]);
            }
            else if(a[mid]==2)
            {
                swap(a[mid],a[e--]);
            }
            else if(a[mid]==1)
            {
                mid++;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

