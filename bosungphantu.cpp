#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n ;
		int a[n];
		set <int> se;
		for(int &x : a){
			 cin >> x;
			 se.insert(x);
		}
		sort(a,a+n);
		int k = se.size();
		int dem = a[n-1] - a[0] + 1 - k;
		cout << dem << endl; 
	}
    return 0;
}

