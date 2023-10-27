#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int candies;
    while(n--)
    {
        cin>>candies;
        if(candies > 2)
        {
            if(candies % 2 == 0) cout<<(candies/2)-1<<endl;
            else if(candies % 2 == 1) cout<<candies/2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}


