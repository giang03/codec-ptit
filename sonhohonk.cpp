#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >> t; 
	while(t--){
		int n, k; cin >> n >> k;
        int a[n];
		int d = 0, res = 0, cnt = 0;
        for(int &x : a){
			cin >> x;
			if(x <= k) d++;
		}
		for(int i = 0; i < d; i++){
			if(a[i] <= k) ++cnt;
		}
		res = cnt;
		for(int i = d; i < n; i++){
			if(a[i] <= k) ++cnt;
			if(a[i-d] <= k) --cnt;
			res = max(res,cnt);
		}
		cout << d - res << endl;
	}
    return 0;
}