#include <bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/1144/problem/C

void solve()
{
    ll n, m[200005], a[200005]= {0};
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> m[i];
        a[m[i]]++;
    }

    sort(m, m+n);

    bool flag=true;
    ll two=0;
    vector<ll> f, s;

    for(int i=0; i<=200000; i++)
    {
        if(a[i]>2)
        {
            flag=false;
        }

        else if(a[i]==2)
        {
            two++;
            f.push_back(i);
            s.push_back(i);
        }
        else if(a[i]==1)
            s.push_back(i);
    }

    if(flag)
    {
        cout << "YES" << "\n" << two << "\n";
        for(int i=0; i<f.size(); i++)
        {
            cout << f[i];
            if(i!=f.size()-1)
                cout << " ";
        }
        cout << "\n";

        cout << n-two << "\n";

        for(int i=s.size()-1; i>=0; i--)
        {
            cout << s[i];
            if(i!=0)
                cout << " ";
        }
        cout << "\n";
    }
    else
        cout << "NO" << "\n";


}

int main()
{
    int t = 1;
    while (t--)
        solve();

    return 0;
}
