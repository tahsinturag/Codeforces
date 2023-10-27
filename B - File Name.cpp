#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/978/problem/B


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    bool flag=true;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
        {
            cnt++;
            flag=true;
        }
    }

    if(flag==true)
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;

}
