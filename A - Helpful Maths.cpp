#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string store;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
       if(s[i] != '+'){
            store.push_back(s[i]);
       }
    }
    sort(store.begin(), store.end());
    cout << store[0];
    for(int i = 1; i < store.size(); i++){
        cout << "+" << store[i];
    }

    return 0;
}
