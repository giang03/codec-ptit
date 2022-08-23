#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int k = 0;
		for(int i = 0; i < n; i++){
			ll x; cin >> x;
			if(x != 0){
				cout << x << ' ';
				k++;
			}
		}
		for(int i = k; i < n; i++){
			cout << 0 << ' ';
		}
		cout << endl;
	}
    return 0;
}


