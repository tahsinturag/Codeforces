#include <bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin >> n;

    vector <int> a, b, c;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if(x == 1) {
            a.push_back(i);
        }
        else if(x == 2) {
            b.push_back(i);
        }
        else if(x == 3) {
            c.push_back(i);
        }
    }

    int d = a.size();
    int e = b.size();
    int f = c.size();
    int g = min(d, e);
    int w = min(f, g);

    cout << w << '\n';

    if(w != 0) {
        for(int i = 0; i < w; i++) {
            cout << a[i] << ' ';
            cout << b[i] << ' ';
            cout << c[i] << endl;
        }
    }

    return 0;
}



