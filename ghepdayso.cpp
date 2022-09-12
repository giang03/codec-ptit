

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> k >> n;
        int a[k][n];
        multiset <int> se;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                se.insert(a[i][j]);
            }
        }
        for(int x : se) cout << x << ' ';
        cout << endl;
    }
    return 0;
}