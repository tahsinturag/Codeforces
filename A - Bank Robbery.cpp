
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b,c,n;
    cin>>a>>b>>c;
    cin>>n;
    long long int x[n];
    for (int i=0;i<n;i++){
        cin>>x[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(x[i]<c && x[i]>b){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
