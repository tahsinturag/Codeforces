#include <bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/1353/problem/C

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        ll res=0;
        cin >> k;
        n = k / 2;
        res = (n*(n + 1)*(2 * n + 1)) / 6;
        cout << res *8 << "\n";
    }
    return 0;
}

