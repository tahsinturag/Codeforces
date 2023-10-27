#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int pol=0;
    int cr=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>0){
            pol+=a;
        }
        else{
            if(pol<1){
                cr++;
            }
            else{
                pol--;
            }
        }
    }
    cout<<cr<<endl;
    return 0;
}
