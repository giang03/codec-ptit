#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool prime[1000001];
void sang(){
	for(int i = 0; i < 1000000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j+=i)
				prime[j] = 0;
		}
	}
}

int main() {
	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ok = 1;
		for(int i = 2; i <= n; i++){
			if(prime[i] && prime[n-i]){
				cout << i <<' ' << n-i << endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout << -1 << endl;
	}
    return 0;
}

