#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
        int a[n];
        long long b[n];
        int ok = 1;
        for(int &x : a) cin >> x;
        b[0] = a[0];
        for(int i = 1; i < n; i++){
            b[i] = b[i-1] + a[i];
        }
        for(int i = 1; i < n; i++){
            if(b[i-1] == b[n - 1] - b[i]){
                ok = 0;
                cout << i+1 << endl;
                break;
            }
        }
        if(ok) cout << -1 << endl;
	}
    return 0;
}