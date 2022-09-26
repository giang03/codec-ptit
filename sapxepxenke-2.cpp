#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        int r = n - 1, l = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                b[i] = a[r--];
            }
            else {
                b[i] = a[l++];
            }
        }
        for(int x : b) cout << x << ' ';
        cout << endl;
    }
    return 0;
}