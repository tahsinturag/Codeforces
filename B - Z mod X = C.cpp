#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//https://codeforces.com/contest/1684/problem/B

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,p,q,r;
        cin>>a>>b>>c;
        p=a+b+c;
        q=b+c;
        r=c;
        cout<<p<<" "<<q<<" "<<r<<endl;
    }
    return 0;
}

