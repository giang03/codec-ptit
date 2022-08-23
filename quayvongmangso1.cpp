#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n,d; cin >> n >> d;
		int a[n];
		for(int &x : a) cin >> x;
		for(int i = d; i < n; i++){
			cout << a[i] << ' ';
		}
		for(int i = 0; i < d; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
    return 0;
}

