
#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
    cin >> s;
    int k = 0;
    int count = 0;
    string check = "hello";
    bool flag = false;
    for(int i=0;i<s.size();i++)
    {
        if (s[i] == check[k])
        {
            k++;
            count++;
        }
        if (count == check.size())
        {
            flag = true;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
return 0;
}
