#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int j=0;
        for(int i = 0; i < n; i+= 2){
            b[i] = a[j++];
        }
        for(int i = 1; i < n; i+= 2){
            b[i] = a[j++];
        }
        for(int x : b) cout << x << ' ';
        cout << endl;
    }
    return 0;
}