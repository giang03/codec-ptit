#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int timkiemnhiphan(int a[],int l,int r, int x){
	while ( l <= r){
		int m = (l+r)/2;
		if(a[m] == x) return 1;
		else if(a[m] > x){
			r = m - 1;
		}
		else l = m + 1;
	}
	return -1;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		int a[n];
		for(int &x : a){
			 cin >> x;
		}
		sort(a,a+n);
		cout << timkiemnhiphan(a,0,n-1,x) << endl;
	}
    return 0;
}

