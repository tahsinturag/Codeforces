#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    set<pair<int,pair<double,int>>> s;
    for(int i=1;i<=m;i++){
        double b=(((m+1.0)/2.0)-i);
        if(b<0){
            b*=-1;
        }
        s.insert({0,{b,i}});
    }
    for(int i=0;i<n;i++){
        pair<int,pair<int,int>> a=*s.begin();
        s.erase(*s.begin());
        cout<<a.second.second<<endl;
        a.first++;
        s.insert(a);
    }

}
