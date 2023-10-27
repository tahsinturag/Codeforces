#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m, n; cin >> m >> n;
    while(1) {
        m++;
        bool prime = true;
        for (int i = 2; i <= m / 2; i++) {
            if (m % i == 0) {
                prime = false; break;
            }
        }
        if (prime == true) {
            if (m == n)
			   cout << "YES\n";
            else

				cout << "NO\n"; 													break;
        }
    }
}

