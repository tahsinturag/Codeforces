#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
	    int n=0;
	     for(int i=0;i<s.length();i++){
		    if(isupper(s[i])){
			    n++;
	     	}
	}
	    if(n>s.length()/2){
		    for(int i=0;i<s.length();i++){
			    s[i] = toupper(s[i]);
		    }
	}
	    else{
		    for(int i=0;i<s.length();i++){
			    s[i] = tolower(s[i]);
		    }
	}
	    cout<<s;


	return 0;
}
