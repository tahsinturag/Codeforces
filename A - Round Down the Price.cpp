#include <bits/stdc++.h>
using namespace std;

int T,res;

void solve()
{
    int n;
    cin >> n;
    int count = 1;
    while(count<n)
    {
        count *= 10;
    }
    if(count==n)
        cout << 0 << endl;
    else
        cout << (n - count / 10) << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}


