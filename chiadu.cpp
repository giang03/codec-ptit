#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int a,m; cin >> a >> m;
		int ok = 1;
		for(int i = 0; i < m; i++){
			if((1ll*a*i) % m == 1){
				cout << i << endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout << -1 << endl;
	}
    return 0;
}

