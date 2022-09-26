#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >> t; 
	while(t--){
		int n, k, idx = 0; cin >> n >> k;
        int a[n];
        long long sum = 0;
        for(int &x : a) cin >> x;
        for(int i = 0; i < k; i++){
            sum += a[i];    
        }
        long long res = sum;
        for(int i = k; i < n; i++){
            sum = sum - a[i-k] + a[i];
            if(sum > res){
                idx = i - k + 1;
                res = sum;
            }
        }
        for(int i = idx; i < idx + k; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
	}
    return 0;
}