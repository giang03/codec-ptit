#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map <int,int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		int dem = 0;
		for(auto it : mp){
			if(it.second > 1){
				dem += it.second;
			}
		}
		cout << dem << endl;
	}
    return 0;
}

