#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
//	int t; cin >> t;
//	while(t--){
		int n; cin >> n;
		int a[n][3], dem = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 3; j++)
				cin >> a[i][j];
		}
		for(int i = 0; i < n; i++){
			int c = 0, d = 0;
			for(int j = 0; j < 3; j++){
				if(a[i][j] == 1){
					c++;
				}
				else d++;
			}
			if(c > d)
				dem++;
		}
		cout << dem << endl;
//	}
    return 0;
}

