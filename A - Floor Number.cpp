#include<bits/stdc++.h>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int count=0;
        int num;
        if(n==1 || n==2){
            cout<<1<<endl;
        }
        else
        {
            n-=2;
            cout<<(n+x-1)/x+1<<endl;
        }
    }
    return 0;
}



