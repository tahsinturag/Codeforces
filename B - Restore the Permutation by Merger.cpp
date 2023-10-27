#include<bits/stdc++.h>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        vector<int> v;
        map<int,int> freq;
        for(int i=0;i<2*n;i++){
            freq[a[i]]++;
            if(freq[a[i]]%2!=0){
                    v.push_back(a[i]);
                }
            }
        for(int i=0; i < v.size(); i++){
            cout<<v[i]<< ' ';
        }
        cout<<endl;
	}

	return 0;
}


