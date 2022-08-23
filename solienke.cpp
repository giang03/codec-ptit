#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(ll n){
	int a = n%10;
	n/=10;
	while(n){
		int res = abs((n%10) - a);
		if(res > 1 || res == 0) return 0;
		a = n%10;
		n/=10;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n < 10) cout << "NO\n";
		else {
			if(check(n)) cout << "YES\n";
			else cout << "NO\n";
		}
	}
    return 0;
}

