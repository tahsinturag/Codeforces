#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin>>s;
    cin>>t;
    int index=0;
    for (int i=0;i<t.size();i++){
        if(s[index]==t[i]){
            index++;
        }
    }
    cout<<index+1<<endl;
	return 0;
}

