#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <int > se;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			while(x){
				se.insert(x%10);
				x/=10;
			}
		}
		for(int x : se){
			cout << x << ' ';
		}
		cout << endl;
	}
    return 0;
}

