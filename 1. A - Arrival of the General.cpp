#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int mx=*max_element(a.begin(),a.end());
	int mn=*min_element(a.begin(),a.end());
	int count=0;
	for(int i=0;i<a.size();++i){
		if(a[i]==mx){
			int j=i;
			while(j>=1){
				swap(a[j],a[j-1]);
				++count;
				--j;
			}
			break;
		}
	}
	for(int i=a.size()-1;i>=0;--i){
		if(a[i]==mn){
			int j=i;
			while(j<a.size()-1){
				swap(a[j],a[j+1]);
				++count;
				++j;
			}
			break;
		}
	}
	cout<<count<<endl;
    return 0;
}
