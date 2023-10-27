#include<bits/stdc++.h>
using namespace std;

int main( ){
    long long int n;
    cin>>n;
    long long int s=0;

        if(n%2==0){
            s=n/2;
        }
        else{
            s=-(n/2 +1);
        }


    cout<<s<<endl;
    return 0;
}
