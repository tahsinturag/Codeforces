#include <bits/stdc++.h>
using namespace std;

int t;
int n, k;

struct node
{
    int a[100000];
};

int main()
{
    cin >> t;
    while (t -- )
    {
        cin >> n >> k;
        map<int , vector<int> > q;
        for (int i = 1; i <= n; i ++)
        {
            int x;
            cin >> x;
            q[x].push_back(i);
        }
        while (k --)
        {
            int a, b;
            cin >> a >> b;
            if (q[a].empty() || q[b].empty()) cout << "NO" << endl;
            else if (q[a].front() < q[b].back()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}

