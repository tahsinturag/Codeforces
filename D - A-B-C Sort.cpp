#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
     cin>>t;
     while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=n%2;i<n;i+=2){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
      }
      if(is_sorted(a.begin(),a.end())){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
     }
     return 0;
}



