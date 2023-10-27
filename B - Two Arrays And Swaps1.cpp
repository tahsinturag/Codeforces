#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1353/problem/B
void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main ()
{

    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i <n; i++) cin >> a[i];
        for (int i = 0; i <n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);

        for (int i = 0; i<k; i++) if (a[i] < b[n-1-i]) swap(a[i], b[n-1-i]);
        int sum = 0;
        for (int i = 0; i <n; i++) sum += a[i];
        cout << sum << "\n";

    }

    return 0;
}
