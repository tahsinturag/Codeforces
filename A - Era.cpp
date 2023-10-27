#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int mx = 0, df;
        for(int i=0; i<n; i++)
        {
            if(a[i]>(i+1))
            {
                df = a[i]-i-1;
                mx = max(mx, df);
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}
