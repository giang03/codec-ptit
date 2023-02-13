#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        ll c[n] = {0};
        for(int &x : a) cin >> x;
        for(int i = 0; i < n; i++){
            ll res = 0;
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]){
                    res = max(res,c[j]);
                }
            }
            c[i] += res + a[i];
        }
        cout << *max_element(c,c+n) << endl;
    }
    return 0;
}