#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,n;
    cin>>a>>b>>n;
    long long int s=gcd(a,n);
    int i=1;
    long long int x=1;
    while(s<=n){
        if(x%2!=0){
           n-=s;
           s=gcd(b,n);
           x+=1;
        }else{
            n=n-s;
            s=gcd(a,n);
            x+=1;
        }

    }

    if(x%2==0)
    cout<<0;
    else
    cout<<1;

    return 0;
}
