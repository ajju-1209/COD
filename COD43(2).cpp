/*COD 43 day (N Digit numbers with digits in increasing order)gfg*/

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    void Ndigit(vector<int> &v,int n,int k,int ans,int p)
    {
        //base case
        if(n==0)
        {
            v.push_back(ans);
            //ans=0;
            return;
        }
        //rec case
        for(int i=k+1;i<=9;i++)
        {
            ans +=i*p;
            Ndigit(v,n-1,i,ans,p/10);
            ans-=i*p;//Reverting changes made by previous calls 
        }
    }
    vector<int> increasingNumbers(int n)
    {
        // Write Your Code here
        vector<int> v;
        int p=1;
        for(int i=0;i<n-1;i++)
        {
            p*=10;
        }
        if(n==1) v.push_back(0);
        Ndigit(v,n,0,0,p);
        return v;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
