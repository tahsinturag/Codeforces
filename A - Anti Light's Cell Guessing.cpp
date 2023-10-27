#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1610/problem/A
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        if(n==1 && m==1)
            cout<<0<<endl;
        else if(n==1 || m==1)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }

    return 0;
}
