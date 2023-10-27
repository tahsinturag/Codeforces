#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int main()
{
        cin >> a >> b >> c;


        // x = (ca - bc) / b

        int x = (c * a - c * b + b - 1) / b;

        cout << x << endl;

        return 0;
}

