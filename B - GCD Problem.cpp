#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1617/problem/B
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
            cout<<n-3<<" "<<2<<" "<<1<<endl;
        else
        {
            if(n%4==1)
                cout<<((n-1)/2)+1<<" "<<((n-1)/2)-1<<" "<<1<<endl;
            else if(n%4==3)
                cout<<((n-1)/2)+2<<" "<<((n-1)/2)-2<<" "<<1<<endl;
        }
    }

    return 0;
}
