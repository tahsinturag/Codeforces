#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else if (n == 3)
    {
        cout << 1 << endl;
        cout << 3 << endl;
    }

    else
    {
        n = n - 3;
        cout << (n / 2) + 1 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }


    return 0;
}

