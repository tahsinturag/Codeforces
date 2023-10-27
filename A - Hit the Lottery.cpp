#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int a,b,c,d,e;
    int sum;
    a=n/100;
    n=n%100;
    b=n/20;
    n=n%20;
    c=n/10;
    n=n%10;
    d=n/5;
    n=n%5;
    e=n/1;
    sum=a+b+c+d+e;
    cout<<sum<<endl;

    return 0;
}
