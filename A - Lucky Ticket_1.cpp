#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='4'&& s[i]!='7')
        {
            cout<<"NO";
            return 0;
        }
        else if(i<(s.length()/2))
            j+=s[i];
        else
            j-=s[i];
    }
    if(j==0)
        cout<<"YES";
    else
        cout<<"NO";

}


