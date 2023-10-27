#include <bits/stdc++.h>
using namespace std;


int main()
{

    int sum=0, n, k, i;
    cin >> n >> k;

    for(i=1; ; i++)
    {
        sum+=i;
        if(sum>k)
        {
            sum-=i;
            break;
        }

        if(i==n)
            i=0;
    }

    cout << k-sum;

    return 0;
}
