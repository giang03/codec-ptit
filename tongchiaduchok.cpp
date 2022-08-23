#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int n, ll k){
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i%k;
	}
	if(sum == k) return 1;
	return 0;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll k; cin >> k;
		if(check(n,k)) cout << 1 << endl;
		else cout << 0 << endl;
	}
    return 0;
}

