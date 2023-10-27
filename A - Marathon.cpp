#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,d;
    cin>>a;
    int count = 0;
    for(int i = 0; i<3;i++)
    {
    cin >>b;
    if(b>a)
    count++;
    }
    cout<<count<<endl;
    }
  }
