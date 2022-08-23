#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main() {
	int a,b; cin >> a >> b;
	int c = max(a,b);
	int d = min(a,b);
	for(int i = d; i <= c; i++){
		if(nt(i)) 
			cout << i << ' ';
	}
    return 0;
}

