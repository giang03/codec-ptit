#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >> t; 
	while(t--){
        int n; cin >> n;
        int a[n*n];
        set <int> se;
        int res = 0;
        for(int &x : a){
            cin >> x;
            res += x;
            se.insert(x);
        }
        int sum = 0;
        auto it = se.rbegin();
        int j = n;
        while(it != se.rend()){
            sum += *it;
            --it;
            --j;
        }
        if(j != 0){
            sum += *(++it)*j;
        }
        cout << sum*n - res << endl;
	}
    return 0;
}