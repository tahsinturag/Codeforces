#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }

        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        if (count==26)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    return 0;
}
