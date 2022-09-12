#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        set <int> se;
        for(long long &x : a){
            cin >> x;
            se.insert(x);
        }
        for(int i = 0; i < n; i++){
            if(se.find(i) != se.end()){
                cout << i << ' ';
            }
            else cout << -1 << ' ';
        }
        cout << endl;
    }
    return 0;
}