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
		sort(a,a+n);
		int res = INT_MAX;
		for(int i = 1; i < n; i++){
			int x = a[i] - a[i-1];
			res = min(res , x);
		}
		cout << res << endl;
	}
    return 0;
}

