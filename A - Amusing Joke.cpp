#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str1;
    string str2;
    string str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    sort(str3.begin(), str3.end());


    string sum = str1 + str2;

    sort(sum.begin(), sum.end());
    if(sum == str3) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }



    return 0;
}




