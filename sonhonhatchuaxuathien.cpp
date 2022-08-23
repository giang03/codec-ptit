#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map <int,int> mp;
		int res = INT_MIN;
		for(int &x : a) {
			cin >> x;
			mp[x]++;
			res = max(res,x);
		}
		sort(a,a+n);
		if(a[n-1] <= 0 || a[0] > 1)	cout << 1 << endl;
		else {
			int ok = 1;
			for(int i = 1; i <= res; i++){
				if(mp[i] == 0){
					ok = 0;
					cout << i << endl;
					break;
				}
			}
			if(ok) cout << a[n-1] + 1 << endl;
		}		
	}
    return 0;
}

