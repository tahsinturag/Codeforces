#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a, b=0;//a= number of stone //b=counter variable
    cin>>a; //take input
    string s; //s=colors of the stones
    cin >> s;
    for (int i=0; i <a; i++)
    {
        if(s[i]==s[i+1])
        {
            b++;
        }
    }

   cout<<b; //print counter variable

    return 0;
}

