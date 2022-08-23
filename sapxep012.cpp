#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		multiset <int > se;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			se.insert(x);
		}
		for(int x : se){
			cout << x << ' ';
		}
		cout << endl;
	}
    return 0;
}

