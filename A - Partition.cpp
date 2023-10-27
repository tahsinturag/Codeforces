#include <bits/stdc++.h>
using namespace std;

int main(){
        int N;
	    int sum = 0;
	    cin >> N;
	    for(int i=1;i<=N;i++){
	        	int A;
	        	cin >> A;
	        sum += abs(A);

	}
	cout << sum << endl;
	return 0;
}
