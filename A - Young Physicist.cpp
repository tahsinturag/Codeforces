#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1=0,y1=0,z1=0,x,y,z;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0&&y1==0&&z1==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";

}
