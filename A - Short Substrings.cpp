#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string b;
        string a;
        cin>>b;
        int p=b.length();
        for(int i=0; i<p-1; i++){
            if(b[i]==b[i-1]){
                a+=b[i];
                i++;
            }
            else if(i==0)
            {
                a+=b[i];
            }
        }
        a+=b[p-1 ];
        cout<<a<<endl;
        }
    return 0;
}

