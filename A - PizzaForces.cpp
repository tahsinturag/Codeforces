#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, ans=0;
        cin>>n;
        if(n<=6)
            cout<<15<<endl;
        else
        {
            n = n-6;
            if(n%2!=0)
                n++;
            ans = (n/2)*5;
            ans += 15;
            cout<<ans<<endl;
        }
    }

    return 0;
}
