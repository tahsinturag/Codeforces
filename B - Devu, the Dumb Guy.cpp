#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://codeforces.com/contest/439/problem/B


int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    ll ans=0;
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        ans+=(a[i]*x);
        if(x>1)
            x--;
    }
    cout<<ans;
}
