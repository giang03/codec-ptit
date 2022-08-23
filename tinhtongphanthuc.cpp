#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += 1.0/i;
	}
	cout << fixed << setprecision(4) << sum << endl;
    return 0;
}

