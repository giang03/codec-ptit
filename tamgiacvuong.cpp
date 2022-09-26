#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll a[],int l, int r, ll x){
    while(l <= r){
        int m = (r+l)/2;
        if(a[m] == x) return 1;
        else if(a[m] > x ){
            r = m - 1;
        }
        else l = m + 1;
    }
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        bool ok = 0;
        int n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            a[i] = x*x;
        }
        sort(a,a+n);
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                if(check(a,j + 1,n - 1,a[i] + a[j])){
                    ok = 1;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}