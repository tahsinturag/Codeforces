#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;

    int c1 = 0,c2 = 0,c3 = 0;

    int a1[5000],a2[5000],a3[5000];

    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        if(a==1){
            a1[c1] = i+1;
            c1++;
        }else if(a==2){
            a2[c2] = i+1;
            c2++;
        }else{
            a3[c3] = i+1;
            c3++;
        }
    }

    int ans = min({c1,c2,c3});

    cout<<ans<<endl;

    for (int i = 0; i <ans; i++)
    {
       cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<" "<<endl;
    }


}
