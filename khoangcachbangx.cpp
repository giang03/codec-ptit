#include <bits/stdc++.h>
using namespace std;

bool timkiem(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l+r) / 2;
        if(a[m] == x){
            return 1;
        }
        else if(a[m] > x){
            r = m - 1;
        }
        else l = m + 1;
    }
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; 
        cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(timkiem(a,n,abs(x-a[i]))){
                ok = 0;
                cout << 1 << endl;
                break;
            }
        }
        if(ok) cout << -1 << endl;
    }
    return 0;
}