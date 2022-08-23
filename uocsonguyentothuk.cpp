#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int xuly(int n, int k){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n %i == 0){
			while(n %i ==0){
				cnt++;
				if(cnt == k) return i;
				n/=i;
			}
		}
	}
	if(n != 1){
		cnt++;
	}
	if(cnt == k) return n;
	else return -1;
}

int main() {
	int t; cin >> t;
	while(t--){
		int x = 1;
		int n, k; cin >> n >> k;
		cout << xuly(n,k) << endl;
	}
    return 0;
}

