#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 +7;

long long luythua(long long a, long long b){
    long long res = 1;
    while(b){
        if(b % 2 == 1){
            res *= a;
            res %= MOD;
        }
        a *=a;
        a %= MOD;
        b/=2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        long long res = 0;
        int k = n-1;
        for(int i = 0; i < n; i++){
            res += 1ll*a[i]*luythua(x,k);
            res %= MOD;
            k--;
        }
        cout << res << endl;
    }
    return 0;
}