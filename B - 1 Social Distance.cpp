#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1668/problem/B
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int a[n];
        long long int ch=n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1; i<n; i++)
        {
            ch+=max(a[i],a[i-1]);
        }
        ch+=max(a[0],a[n-1]);
        if(ch<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
