
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int cit[n];
    for(int i=0;i<n;i++){
        cin>>cit[i];
    }
    sort(cit,cit+n);
    for(int i=0;i<n-1;i++){
        if(cit[i]!=cit[n-1]){
            a+=abs(cit[n-1]-cit[i]);
        }
    }
    cout<<a<<endl;
    return 0;
}
