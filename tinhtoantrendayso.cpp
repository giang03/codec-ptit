#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int MOD = 1e9 + 7;
ll powmod(ll a, ll b){
    ll tmp = 1;
    while(b){
        if(b % 2 == 1){
            tmp *= a;
            tmp %= MOD;
        }
        a *= a;
        a %= MOD;
        b/=2;
    }
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        ll h = 1;
        bool ok = 1;
        for(int &x : a){
            cin >> x;
            if(x == 0){
                cout << 1 << endl;
                ok = 0;
            }
        }
        if(ok){
            int g = a[0];
            for(int i = 0; i < n; i++){
                h *= a[i];
            }
            for(int j = 0; j < n; j++){
                g = __gcd(g,a[j]);
            }
            cout << powmod(h,g) << endl;
        }
    }
    return 0;
}