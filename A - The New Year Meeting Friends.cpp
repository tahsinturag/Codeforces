#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int p,r;
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    r=a[1]-a[0];
    p=a[2]-a[1];
    cout<<p+r<<endl;
    return 0;
}

