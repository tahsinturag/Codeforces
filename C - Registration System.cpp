#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, int> data;
    string s;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (data.count(s) == 0)
        {
            cout << "OK" << endl;
            data[s] = 1;
        }
        else
        {
            cout << s << data[s] << endl;
            data[s] += 1;
        }
    }
}

int main()
{
    solve();
}
