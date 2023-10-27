#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    int len = str.length();

    char cur = 0;
    for(int i = 0; i<len; i++)
    {
        if(str[i] > cur)
            cur = str[i];
    }

    int count = 0;
    for(int i = 0; i<len; i++)
    {
        if(str[i] == cur) count++;
    }

    for(int i = 1; i<=count; i++)
    {
        putchar(cur);
    }
    return 0 ;
}

