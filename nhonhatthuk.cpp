#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        cout << a[x - 1] << endl;
    }
    return 0;
}