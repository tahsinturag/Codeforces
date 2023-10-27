#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/contest/1668/problem/B
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int m, n;
        cin >> n >> m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        long long int count=n;
        sort(arr,arr+n);
        for(int i=1; i<n; i++)
        {
            count+=max(arr[i],arr[i-1]);
        }
        count+=max(arr[0],arr[n-1]);
        if(count<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
