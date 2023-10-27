#include<bits/stdc++.h>
using namespace std;


int main() {

    int k, have, w, need=0;
    cin>>k>>have>>w;
    for(int i=1; i<=w; i++)
        need += i*k;
    if(need<=have)
        cout<<0<<endl;
    else
        cout<< need-have;

    return 0;
}
