#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int res = 0;
		for(int i = 0; i < n; i++){
			res = max(res , a[i]);
		}
		cout << res << endl;
	}
    return 0;
}

