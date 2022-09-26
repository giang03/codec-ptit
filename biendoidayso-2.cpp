#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
        long long a[n];
        long long b[n];
        for(long long &x : a) cin >> x;
        for(int i = 0; i < n; i++){
            if(i == 0){
                b[i] = a[i]*a[i+1];
            }
            else if(i == n - 1){
                b[i] = a[i]*a[i-1];
            }
            else {
                b[i] = a[i+1]*a[i-1];
            }
        }
        for(ll x : b) cout << x << ' ';
        cout << endl;
	}
    return 0;
}