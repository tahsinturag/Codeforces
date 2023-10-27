#include<bits/stdc++.h>
using namespace std;
int main() {
   long long int t;
    cin>>t;
    while(t--){
        long long int n,i,num;
        cin>>n;
        int count=0;
        for(i=1;i<=9;i++){
            num=i;
            while(num<=n){
                count++;
                num=(num*10)+i;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}



