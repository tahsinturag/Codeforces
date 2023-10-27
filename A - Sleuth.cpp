#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    for(int i=s.size();i>=0;i--){
        char val=tolower(s[i]);
        if(!(val >= 'a' && val <= 'z')){
            continue;
        }
        if(val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u' || val == 'y'){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        break;
    }

    return 0;
}
