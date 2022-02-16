/*COD 38 day (problem 1) Tower Of Hanoi gfg(topic recursion)*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    
    
    
    long long TOH(int n,int s,int d,int h)
    {
        //base case
        if(n==0)
        {
            return 1;
        }
        long long l=TOH(n-1,s,h,d);
        //cout<<*c<<endl;
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        long long m=TOH(n-1,h,d,s);
        return l+m;
    }
    
    
    
    long long toh(int n, int s, int d, int h) {
    
        long long c=0;
        c=TOH(n,s,d,h);
        return c-1;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
