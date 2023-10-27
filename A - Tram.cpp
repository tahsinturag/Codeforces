#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],b[1000],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int s=0;
    int max=0;
    s=s+b[0];
    max=s;
    for(i=1;i<n;i++)
    {
        s=s-a[i];
        s=s+b[i];
        if(s>max)
        {
            max=s;
        }
    }
    cout<<max;
 return 0;
}
