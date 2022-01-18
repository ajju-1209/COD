/*COD(18 problem) Equilibrium point gfgf*/


// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
    long long leftsum=0,rightsum=0;
    
    int ans=-1;
    //claculating total sim of array
    
    
    for(int i=0;i<n;i++)
    {
        rightsum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        //rightsum
        rightsum-=a[i];
        if(leftsum==rightsum)
        {
            ans=i+1;
            break;
        }
        else
        {
            leftsum+=a[i];
        }
    }
    return ans;
        
 }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
