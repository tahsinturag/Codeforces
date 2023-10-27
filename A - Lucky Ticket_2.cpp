#include <bits/stdc++.h>

using namespace std;

int main()
{
	//input
    int n,count=0,sum1=0,sum2=0;
    string s;
    cin>>n;
    cin>>s;

    //main part
    for(int i=0; i<n; i++)
    {
        if(s[i]=='4' || s[i]=='7')
            count++;
    }

    for(int i=0; i<n/2; i++)
    {
        sum1=sum1+s[i];
    }

    for(int i=n/2; i<n; i++)
    {
        sum2=sum2+s[i];
    }



    //output
    if(sum1==sum2 && count==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

