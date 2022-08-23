#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll a[100];
void fibo(){
	a[1] = 1; a[2] = 1;
	for(int i = 3 ; i <= 92; i++){
		a[i] = a[i-1] + a[i-2];
	}
}

int main() {
	fibo();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
    return 0;
}

