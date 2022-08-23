#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int sumcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		if(sum > 9)
			sum = sumcs(sum);
		n/=10;
	}
	return sum;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << sumcs(n) << endl;
	}
    return 0;
}

