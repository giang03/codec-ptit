#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll gt(int n){
	ll res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int main() {
	int n; cin >> n;
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += gt(i);
	}
	cout << sum << endl;
    return 0;
}

