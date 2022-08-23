#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(ll n){
	if(n%10 != 6) return 0;
	n/=10;
	if(n%10 != 8) return 0;
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
    return 0;
}

