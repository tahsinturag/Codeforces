#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/38/problem/A


int main() {

	int n;
	cin >> n;

	int a[100];

	for (int i = 1; i < n; i++)
		cin >> a[i];

	int x, y;
	cin >> x >> y;
	int ans = 0;

	for (int i = x; i < y; i++)
		ans += a[i];

	cout << ans;

	return 0;
}
