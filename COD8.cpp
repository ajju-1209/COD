
//COD DAY 8(https://www.hackerrank.com/contests/anticoding/challenges/aditya-and-modulo/problem)


#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n];
       
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map<ll,ll> map;
        for(int i=0;i<n;i++)
        {
            map[a[i]%m]++;
        }
        ll j=0,k=0;
        for(auto i:map)
        {
            if(i.second==1)
            {
                j++;
            }
            else
            {
                k++;
            }
        }
       cout<<j+k<<"\n"<<j<<endl;
    }
    return 0;
}
