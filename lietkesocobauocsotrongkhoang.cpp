#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int prime[1000001];
void sang(){
	for(int i = 0; i<= 1000000; i++)
		prime[i] = 1;
    prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
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
		int a,b; cin >> a >> b;
        int cnt = 0;
		for(int i = sqrt(a); i <= sqrt(b); i++){
			if(prime[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}

