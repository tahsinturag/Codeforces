#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/32/problem/A
int main()
{
  int n,d;
  cin>>n>>d;
  int a[n];

  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int ans=0;
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(abs(a[i]-a[j])<=d)
          {
              ans++;
          }
      }
  }
  cout<<ans*2;
    return 0;
}

