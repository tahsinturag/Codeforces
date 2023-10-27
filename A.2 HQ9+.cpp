#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/133/problem/A
int main()
{
    string s;
    cin>>s;
    bool flag = false;
    for(int i = 0;i < s.size();i++){
        if((s[i] == 'H') || (s[i] =='Q')||(s[i] =='9')){
            flag = true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!flag)
        cout<<"NO"<<endl;
    return 0;
}
