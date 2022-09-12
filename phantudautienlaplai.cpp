

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int ok = 1;
        for(int &x : a) cin >> x;
        for(int i = 1; i < n; i++){
            if(ok){
                for(int j = 0; j < i; j++){
                    if(a[i] == a[j]){
                        cout << a[i] << endl;
                        ok = 0;
                        break;
                    }
                }
            }
        }
        if(ok) cout << -1 << endl;
    }
    return 0;
}