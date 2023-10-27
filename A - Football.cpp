#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int i,l=s.length(),c=1;
    for(i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
            if(c==7)
            {
                cout<<"YES\n";
                return 0;
            }
        }
            else
            {
                c=1;
            }

    }
    cout<<"NO\n";


    return 0;
}
