#include<bits/stdc++.h>
using namespace std;
int main() {
    long int n,i;
    cin>>n;
    int count=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}



