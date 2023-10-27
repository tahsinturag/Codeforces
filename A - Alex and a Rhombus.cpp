#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>> n;
    int j=1,sum=0;
    for(int i=1;i<=n;i++)
    {
         sum=sum+j;
         if(i==n)
         {
            for(int k=j-2;k>=1;k-=2)
            {
                sum=sum+k;
            }
         }
        j+=2;
    }
    cout<<sum;
}








