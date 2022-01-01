/*ROTATE ARRAY
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 
*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
    	int n,d;
    	cin>>n>>d;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	}
    	for(int i=d;i<n;i++)
    	{
    	    cout<<a[i]<<" ";
    	}
    	for(int i=0;i<d;i++)
    	{
    	    cout<<a[i]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}
