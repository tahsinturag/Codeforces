#include<bits/stdc++.h>
using namespace std;
#define ll long long
//https://codeforces.com/contest/977/problem/B

int main()
{
    ll a;
    cin>>a;
    string s;
    cin>>s;
    int r = 0;
    int cnt = 0;
    string ans;
    for(int i=0; i<a-1; i++)
    {
        cnt=0;
        for(int j=0; j<a-1; j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                cnt++;
                if(r<cnt)
                {
                    r=cnt;
                    ans = string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


