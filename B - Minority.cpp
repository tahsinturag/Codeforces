#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1633/problem/B
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n0=0, n1=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                n0++;
            else
                n1++;
        }
        if(n1==n0)
        {
            if(n1>=2)
                cout<<n1-1<<endl;
            else
                cout<<0<<endl;
        }
        else
            cout<<min(n1, n0)<<endl;
    }

    return 0;
}
