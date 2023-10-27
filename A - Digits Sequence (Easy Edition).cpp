#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,sum=0;
    string st;
    cin>>n;
    for(i=0; i<5000; i++)
    {
        st= st+to_string(i);
    }
    cout<<st[n]<<endl;
    return 0;
}
