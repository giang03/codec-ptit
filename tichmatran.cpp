#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,m,p; cin >> n >> m >> p;
	int a[n][m],b[m][p];
	ll c[n][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++)
			cin >> b[i][j];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			ll tmp = 0;
			for(int k = 0; k < m; k++){
				tmp += 1ll*a[i][k]*b[k][j];
			}
			c[i][j] = tmp;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++)
			cout << c[i][j] << ' ';
		cout << endl;
	}
    return 0;
}

