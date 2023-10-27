#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/47/problem/A
void solve()
{
    int num,Flag = 0;
    cin>>num;
    int Val = 2 * num;

    int i = 1;
    while(i <= num)
    {
        if(i * (i + 1) == Val)
        {
            Flag = 1;
            cout<<"YES"<<endl;
            break;
        }
        i++;
    }
    if(Flag == 0)
        cout<<"NO"<<endl;
}

int main()
{

    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
