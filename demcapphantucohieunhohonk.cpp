#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        ll dem = 0;
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            int id = lower_bound(a,a+n,a[i]+k) - a;
            dem += id-i-1;
        }
        cout << dem << endl;
    }
    return 0;
}