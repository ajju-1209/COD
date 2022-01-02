#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here  
        long long time1=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                time1+=a[i];
            }
            else
            {
                time1+=b[i];
            }
        }
        long long time2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                time2+=b[i];
            }
            else
            {
                time2+=a[i];
            }
        }
        return min(time1,time2);
    }
};
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
