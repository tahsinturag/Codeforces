#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/750/problem/A
int main()
{
    int n,k;
    cin>>n>>k;

    int time=0;
    int solved = 0;
    for (int i=0; i<n; i++)
    {
        time += 5*(i+1);
        if(time <= (240-k))
        {
            solved++;
        }
        else break;
    }

    cout<<solved<<endl;
}


