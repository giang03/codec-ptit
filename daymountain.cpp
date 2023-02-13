#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int x,y,i,j; cin >> x >> y;
        bool ok= 1;
        for(i = x + 1; i <= y; i++){
            if(a[i] < a[i-1]){
                break;
            }
        }
        for(j = i; j <= y; j++){
            if(a[j] > a[j-1]){
                ok = 0;
            }
        }
        if(ok ) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}