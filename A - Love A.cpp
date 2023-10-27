#include<bits/stdc++.h>
using namespace std;
int main() {

        string s;
        cin>>s;
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                count++;
            }
        }
        if(count>n/2){
            cout<<n<<endl;
        }
        else{
            cout<< 2*count - 1 <<endl;

        }


}


