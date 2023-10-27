#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int i = 0, ans = 0;
    while (i < n)
    {
        set<char> m;
        while (m.size() <= 3)
        {
            m.insert(s[i++]);
        }
        if (m.size() > 3)
            i--;
        ans++;
    }
    cout << ans << endl;
}


int main()
{

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
