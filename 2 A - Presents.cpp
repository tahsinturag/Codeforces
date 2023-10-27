#include<bits/stdc++.h>

using namespace std;


 //using map
int main(){
    map<int ,int> m;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        m.insert({x,i});
    }
    auto itr=m.begin();
    for(int i=1;i<=n;i++){
        cout<<itr->second<<' ';
        itr++;
    }

        cout<<endl;
    return 0;
}
