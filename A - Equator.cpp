#include <bits/stdc++.h>

using namespace std;

int main()
{
     double s=0,sum=0;
    int count=0,n;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s>=sum/2)
            break;
        s+=a[i];
        count++;
    }
    cout<<count;
    return 0;
}
