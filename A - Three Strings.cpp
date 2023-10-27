#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;

        for(int i=0; i<a.size(); i++)
        {
            if(c[i]!=a[i])
            {
                swap(c[i],a[i]);
                if(a[i]!=b[i])
                {
                    swap(a[i],c[i]);
                    swap(b[i],c[i]);

                }
            }
            else
            {
                swap(c[i],b[i]);
            }
        }
        if(a.compare(b)==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
