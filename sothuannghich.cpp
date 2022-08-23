#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(ll n){
	ll tmp = n;
	ll res = 0;
	while(n){
		res = res*10 + n%10;
		n/=10;
	}
	if(tmp == res) return 1;
	return 0;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}

