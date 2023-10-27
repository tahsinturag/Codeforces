#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int value=k;
    int count=1;
    int i=2;
    while(true){
        if(value%10==0){
        cout<<count<<endl;
        break;
    }
    else if(value%10==r){
        cout<<count<<endl;
        break;
    }
    else{
        value=k*i;
        count++;
        i++;
    }
    }
    return 0;
}

