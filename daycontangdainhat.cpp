#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l[n];
        for(int i = 0; i < n; i++) l[i] = 1;
        int res = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[i] > a[j]){
                    l[i] = max(l[i],l[j] + 1);
                }
            }
            res = max(res,l[i]);
        }
        cout << res << endl;
    }
    return 0;
}