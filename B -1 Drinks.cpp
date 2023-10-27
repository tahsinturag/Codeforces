#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/200/problem/B

int main()
{
    int n,a;
    cin>>n;
    int sum=0;
    int temp=n;
    while (n--)
    {
        cin>>a;
        sum+=a;
    }
    cout<<(float)sum/temp<<endl;

    return 0;
}

