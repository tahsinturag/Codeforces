#include<bits/stdc++.h>
using namespace std;


int main() {


    int t;
    cin>>t;
    while(t--)
    {
        int n, min = 1000, sub;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                sub = abs(arr[i]-arr[j]);
                if(sub<min)
                    min = sub;
            }
        }
        cout<<min<<endl;
    }

    return 0;
}
