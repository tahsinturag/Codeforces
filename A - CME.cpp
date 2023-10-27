#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,p;
    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>p;
        if(p==2) cout<<"2\n";
        else
        {
            cout<<p%2<<endl;
        }
    }
}
