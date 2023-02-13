#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll k,sum = 0; cin >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int dem = 0, i = 0,res = INT_MAX;
        bool ok = 1;
        while(i < n){
            sum += a[i];
            dem++;
            i++;
            while(sum > k){
                res = min(res,dem);
                sum -= a[i-dem];
                dem--;
                if(sum > k){
                    res = min(res,dem);
                }
                ok = 0;
            }
        }
        if(ok) cout << -1;
        else cout << res;
        cout << endl;
    }
    return 0;
}