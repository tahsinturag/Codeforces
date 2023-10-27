#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int j =0;
    string s1 = "hello";
    for(int i =0;i<n;i++){
        if(s[i]==s1[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return ;

}
int main() {

    solve();
}
