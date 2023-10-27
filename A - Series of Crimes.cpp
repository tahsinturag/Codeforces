#include<iostream>
using namespace std;
char c[1000];
int n,m;
int main()
{
    cin>>n>>m;
    int x=0,y=0;

    for(int i=0; i<n; i++)
    {
        cin>>c;
        for(int j=0; j<m; j++)
            if(c[j]=='*')
                x^=i,y^=j;
    }
    cout<<x+1<<" "<<y+1<<endl;
}

