#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int p,q,r,s;
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    r=a[3]-a[0];
    p=a[3]-a[1];
    q=a[3]-a[2];

    cout<<p<<" "<<q<<" "<<r;
    return 0;
}

