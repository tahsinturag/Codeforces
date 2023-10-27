#include<bits/stdc++.h>
using namespace std;

int main(){

	string a, b, s;
	cin >> a;
	cin >> b;


	reverse(a.begin(), a.end());
	s = a;
	if(s == b){
		cout <<"YES" <<'\n';
	}
	else
		cout << "NO" <<'\n';


}





