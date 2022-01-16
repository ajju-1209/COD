/*COD(16 problem)*/


#include<bits/stdc++.h>>
using namespace std;



string check(int n)
{
  if(n<21) return "The streak lives still in our heart!";
  if(n%21==0)
  {
    return "The streak is broken!";
  }
  vector<int> v;
  while(n)
  {
    int temp=n%10;
    v.push_back(temp);
    n/=10;
  }
  int i=0,j=1;
  while(j<v.size())
  {
    if( (10*v[j]+v[i]) == 21 )
    {
      return "The streak is broken!";
    }
    i++,j++;
  }
  return "The streak lives still in our heart!";
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<check(n)<<endl;
  }
  return 0;
}
