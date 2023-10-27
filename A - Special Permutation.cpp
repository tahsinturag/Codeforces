#include<bits/stdc++.h>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        vector<int> p;
        for(int i=0;i<n-1;i++){
            p.push_back(a[i+1]);
            }
        p.push_back(a[0]);
        for(int i=0; i < p.size(); i++){
            cout<<p[i]<< ' ';
        }
        cout<<endl;
	}

	return 0;
}

