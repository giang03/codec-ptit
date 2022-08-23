#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool nt(ll n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int i = 2; 
		if(nt(n)) cout << n << endl;
		else {
			int res = INT_MIN;
			while(i <= n/i){
				if(n % i == 0){
					res = max(res, i);
					while(n %i ==0) {
						n/=i;
					}
				}
				else i++;
			}
			if(n != 1) cout << n << endl;
			else cout << res << endl;
		}
	}
    return 0;
}

