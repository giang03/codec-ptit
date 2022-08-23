#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n],b[m];
		for(int &x : a) cin >> x;
		for(int &x : b) cin >> x;
		sort(a,a+n); sort(b,b+m);
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] > b[j]){
				cout << b[j] << ' ';
				j++;
			}
			else{
				cout << a[i] << ' ';
				i++;
			}
		}
		while(i < n){
			 cout << a[i] << ' ';
			 i++;
		}
		while(j < m) {
			cout << b[j] << ' ';
			j++;
		}
		cout << endl;
	}
    return 0;
}

