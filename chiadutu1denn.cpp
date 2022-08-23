#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll k; cin >> k;
		int sum = 0;
		for(int i = 1; i <= n; i++){
			sum += i%k;
		}
		cout << sum << endl;
	}
    return 0;
}

