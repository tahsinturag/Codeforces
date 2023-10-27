#include<bits/stdc++.h>
using namespace std ;
//https://codeforces.com/contest/200/problem/B

int main()
{
    int n ;
    cin >> n ;

    vector<int>v(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    double sum ;
    sum = accumulate(v.begin(), v.end(), 0);

    cout << fixed << setprecision(12) <<  (sum / n) << endl;
    return 0 ;
}
