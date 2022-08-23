#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int s[100001];
void quyhoach(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		s[i] = sum;
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		int n,q; cin >> n >> q;
		int a[n];
		for(int &x : a) cin >> x;
		quyhoach(a,n);
		while(q--){
			int l,r; cin >> l >> r;
			cout << s[r-1] - s[l-2] << endl;
		}
	}
    return 0;
}

