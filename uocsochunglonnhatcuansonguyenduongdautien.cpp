#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return 1ll*a/gcd(a,b)*b;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll res = 1;
		for(ll i = 2; i <= n; i++){
			res = lcm(res,i);
		}
		cout << res << endl;
	}
    return 0;
}

