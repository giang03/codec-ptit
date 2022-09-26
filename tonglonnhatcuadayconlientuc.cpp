#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        ll ans = INT_MIN;
        ll tmp = 0;
        for(int i = 0; i < n; i++){
            tmp += a[i];
            ans = max(tmp,ans);
            if(tmp < 0) tmp = 0;
        }
        if(ans < 0) cout << -1 << endl;
        else 
            cout << ans << endl;
    }
    return 0;
}