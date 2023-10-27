#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x;
    char chr[10],arr[n];
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        cin>>chr;
        if(chr[0]=='+'||chr[1]=='+')
         x++;
        else x--;
    }
    cout<<x;

}

