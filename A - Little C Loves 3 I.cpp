#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1047/problem/A
int main()
{
    int n;
    cin>>n;
    int rem;
    if(n%3==2)
    {
        cout<<2<<" "<<2<<" "<<n-4<<endl;
    }

    else
    {
        cout<<1<<" "<<1<<" "<<n-2<<endl;
    }
    return 0;

}
