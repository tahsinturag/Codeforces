#include<bits/stdc++.h>
using namespace std;

int main( ){
    int n;
    cin>>n;
    int count =0;
    int mag[n];
    for(int i=0;i<n;i++){
        cin>>mag[i];
    }
    for(int i=0;i<n;i++){
        if(mag[i]!=mag[i+1]){
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}

