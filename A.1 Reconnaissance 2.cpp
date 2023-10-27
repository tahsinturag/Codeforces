#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/34/problem/A
int main()
{

    int n;
    cin>>n;
    int b[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    b[n]=b[0];
    for(int i=0; i<n; i++)
    {
        b[i]=abs(b[i]-b[i+1]);
    }
    int m=*min_element(b,b+n),j=0;

    for(int i=0; i<n; i++)
    {
        if(m == b[i])
        {
            j=i+1;
            break;
        }
    }
    if(j==n)
    {
        cout<<j<<" "<<1<<endl;
    }
    else
    {
        cout<<j<<" "<<j+1<<endl;
    }

    return 0;
}
