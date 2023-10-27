#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1626/problem/A
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }

    return 0;
}
