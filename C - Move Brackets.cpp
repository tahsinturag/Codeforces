#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/1374/problem/C
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        stack<int> st;
        string s ;
        cin >> s ;
        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                    st.pop();
            }

        }
        cout << st.size() << endl;

    }

}



