#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        int arr[n],count=0;
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr,arr+n);
        for(int i=1; i<n; i++)
            if(arr[i]-arr[i-1]>1)count++;
        if(count)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}

