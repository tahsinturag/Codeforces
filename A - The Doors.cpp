#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1143/problem/A
int main()
{

    int n, z=0, o=0 ;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
    }
    for(int i=0; i<n; i++)
    {
        if(d[i]==0)
        {
            z=i;
        }
        else if(d[i]==1)
        {
            o=i;
        }
    }
    int k= min(z,o);
    cout<<k+1<<endl;


}

