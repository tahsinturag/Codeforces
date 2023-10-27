#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    if(n<m){
        swap(n,m);
    }
    if(m==1 && n>=3){
        cout<<-1<<endl;
    }
   else if((n-m)%2==0){
        cout<<2*n-2<<endl;
    }
    else{
        cout<<2*n-3<<endl;
    }
}
return 0;
}
