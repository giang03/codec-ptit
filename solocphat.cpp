#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int n){
	while(n){
		if(n%10 != 8 && n%10 != 6 && n%10 != 0) 
			return 0;
		n/=10;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}

