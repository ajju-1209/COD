/*COD (32 problem) Transfiguration gfg */


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    //	unordered_map<char,int> m1,m2;
    	int n=A.length(),m=B.length();
    	if(n!=m) return -1;
    	int sum=0;
    	for(int i=0;i<n;i++)
    	{
    	   sum+=(A[i]-0);
    	}
    	//Storing string B
    	for(int i=0;i<n;i++)
    	{
    	    sum-=(B[i]-0);
    	}
    	if(sum!=0) return -1;
    	int i=n-1,j=m-1,ans=0;
    	//Code to count number of times spell is to be performed
    	while(i>=0 && j>=0)
    	{
    	    if(A[i]==B[j])
    	    {
    	        i--;
    	        j--;
    	    }
    	    else
    	    {
    	        ans++;
    	        i--;
    	    }
    	}
    	return ans;
    	
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
