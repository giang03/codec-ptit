#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int i = 2, cnt = 0;
	while( i <= n/i){
		if(n % i == 0){
			while(n %i == 0){
				cnt++;
				n/=i;
			}
			cout << i << ' ' << cnt << endl;
		}
		else {
			i++;
			cnt = 0;
		}
	}
	if(n != 1) cout << n << ' ' << 1 << endl;
    return 0;
}

