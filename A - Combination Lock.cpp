#include<bits/stdc++.h>
using namespace std;


int main() {
    long long int n;
    string a, b;
    cin >> n >> a >> b;
    int moves = 0;

    for (int i = 0; i < n; i++){
        int dif1=abs(a[i] - b[i]);
        int dif2=10 - abs(a[i] - b[i]);
        moves += min(dif2,dif1);
    }
    cout << moves << endl;
	return 0;
}

