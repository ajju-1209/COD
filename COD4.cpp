#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

vector<bool> v(MAX,true);

void seive()
{
	v[1]=true;
	for(int i=2;i*i<=MAX;i++)
	{
		if(v[i])
		{
			for(int j=i*i;j<=MAX;j+=i)
			{
				v[j]=false;
			}
		}
	}
}

int main()
{
	
	seive();
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		cin>>k;
		if(v[k])
		{
			cout<<"No\n";
		}
		else
		{
			cout<<"Yes\n";
		}
	}
	return 0;								
}
