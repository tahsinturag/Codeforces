#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/22/problem/A
int main()
{
    int n;
    cin>>n;
    int x[n];
    for (int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    bool flag=false;
    sort(x,x+n);

    for(int i=1; i<n; i++)
    {
        if(x[i]>x[i-1])
        {
            cout<<x[i];
            flag=true;
            break;
        }
    }

    if(flag==false)
    {
        cout<<"NO";
    }
    return 0;
}

