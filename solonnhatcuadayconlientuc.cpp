#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        multiset <int> ms1;
        for(int i = 0; i < k; i++){
            ms1.insert(a[i]);
        }
        cout << (*ms1.rbegin()) << ' ';
        for(int i = k; i < n; i++){
            ms1.erase(ms1.find(a[i-k]));
            ms1.insert(a[i]);
            cout << (*ms1.rbegin()) << ' ';
        }
        cout << endl;
    }
    return 0;
}