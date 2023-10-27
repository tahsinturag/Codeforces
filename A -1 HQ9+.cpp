#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/133/problem/A
int main()
{
    char p[200];
    cin>>p;
    int i,c=0;
    for(i=0; i<strlen(p); i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            c=1;
            break;
        }
    }
    if(c==1) cout<<"YES\n";
    else cout<<"NO\n";

}

