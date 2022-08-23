#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a,a+n);
		cout << a[k-1] << endl;
	}
    return 0;
}

