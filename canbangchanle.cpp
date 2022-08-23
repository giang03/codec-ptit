#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int n){
	int c = 0, l = 0;
	while(n){
		int res = n%10;
		if(res % 2== 0) c++;
		else l++;
		n/=10;
	}
	if(c == l) return 1;
	return 0;
}

int main() {
	int n; cin >> n;
	int a = pow(10,n-1), b = pow(10,n);
	int cnt = 0;
	for(int i = a; i < b; i++){
		if(check(i)){
			cnt++;
			cout << i << ' ';
			if(cnt == 10){
				cout << endl;
				cnt = 0;
			}
		}
	}
    return 0;
}

