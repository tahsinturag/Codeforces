#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a, b, c, d, cycle, time;
        cin>>a>>b>>c>>d;
        if(b>=a)
            cout<<b<<endl;
        else if(b<a && c<=d)
            cout<<-1<<endl;
        else
        {
            a -= b;
            if(a%(c-d)==0)
                cycle = a/(c-d);
            else
                cycle = (a/(c-d))+1;
            time = (c*cycle)+b;
            cout<<time<<endl;
        }
    }

    return 0;
}
