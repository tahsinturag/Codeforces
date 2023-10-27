#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    long long n,b,x,y,count=0,sum=0;
    cin>>n>>b>>x>>y;
    for(int i=1;i<=n;i++){
        if(count+x>b){
            count-=y;
            sum+=count;
        }
        else {
            count+=x;
            sum+=count;
        }
    }
    cout<<sum<<endl;
}

return 0;
}
