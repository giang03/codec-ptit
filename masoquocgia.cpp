#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll res = 0;
		int a[19], k = 0;
		while(n){
			res = res * 10 + n%10;
			n/=10;
		}
		while(res){
			a[k++] = res%10;
			res /= 10;
		}
		int cnt = 0;
		for(int i = 0; i < k; i++){
			if(a[i] == 0 && a[i+1] == 8 && a[i+2] == 4)
				break;
			else {
				cout << a[i];
				cnt++;
			}
		}
		for(int i = cnt + 3; i < k; i++){
			cout << a[i];
		}
		cout << endl;
	}
    return 0;
}

