#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//https://codeforces.com/contest/34/problem/A

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    ll las = abs(arr[0] - arr[n - 1]);
    ll maxi = las, a1 = 0, a2 = n - 1;
    for (int i = 1; i < n; i++)
    {

        if (abs(arr[i] - arr[i - 1]) < maxi)
        {
            maxi = abs(arr[i] - arr[i - 1]);
            a1 = i;
            a2 = i - 1;
        }
    }

    cout << a2 + 1 << " " << a1 + 1 << endl;
}

int main()
{

    solve();

    return 0;
}
