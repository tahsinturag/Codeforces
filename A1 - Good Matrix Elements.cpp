#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int cNum,sum=0;
    int middle=(n-1)/2,lDiag=0,rDiag=n-1;
    for (int i = 0; i < n; ++i,rDiag--,lDiag++)
    {
        for (int j = 0; j < n; ++j)
        {
            cin>>cNum;
            if(i==middle)
            {
                sum+=cNum;
            }
            else if(j==middle)
            {
                sum+=cNum;
            }
            else if(j==lDiag && j==rDiag)
            {
                sum+=cNum;
            }
            else if(j==lDiag || j==rDiag)
            {
                sum+=cNum;
            }

        }
    }
    printf("%d\n",sum);

    return 0;

}

