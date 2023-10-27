#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    long int x,y,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        long int ans = 0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }
    }
    return 0;
}

