#include <iostream>
using namespace std;
//https://codeforces.com/contest/61/problem/A
int main() {
	string s1,s2;
	cin>>s1>>s2;
	int f = 0;
	string str;
	for (int i=0;i<s1.length();i++){
		if(s1[i] != s2[i]) str+='1';
		else str+='0';
	}
	cout<<str<<endl;
	return 0;
}
