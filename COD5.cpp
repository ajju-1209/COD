

/*Problem of the day (problem 5) */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long result=0;
	    for(int i=0;i<n;i++)
	    {
	        result=__gcd(result,a[i]);
	    }
	    cout<<result<<endl;
	}
	return 0;
}

