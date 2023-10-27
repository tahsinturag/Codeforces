#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1353/problem/B
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a,b;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=1; i<=n; i++)
        {
            int y;
            cin>>y;
            b.push_back(y);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for(int i=0; i<k; i++)
        {
            if(a[i]<b[i]) swap(a[i],b[i]);
        }
        int s=0;
        for(int i=0; i<n; i++)
            s+=a[i];
        cout<<s<<endl;
    }
}
