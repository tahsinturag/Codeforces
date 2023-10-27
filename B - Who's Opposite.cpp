#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int t;
	    cin>>t;
	    for(int i=1;i<=t;i++)
	    {
		    int a,b,c;
		    cin>>a>>b>>c;
	    	int n;
	    	n=(max(a,b)-min(a,b))*2;
    		if(a>n||b>n||c>n)
		      cout<<"-1"<<endl;
		    else if(c<=n/2)
		      cout<<c+n/2<<endl;
	    	else
		      cout<<c-n/2<<endl;
	}
	return 0;
}
