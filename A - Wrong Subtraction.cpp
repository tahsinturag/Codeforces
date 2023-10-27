#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number, i;
    cin>>number;
    cin>>i;
    while(i--)
    {
        if(number % 10 == 0)
        {
            number/=10;
        }
        else
        {
            number--;
        }

    }
    cout<<number<<endl;
}


