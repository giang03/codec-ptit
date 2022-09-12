

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(long long n){
    if( n < 2) return 1;
    ll f1 = 0, f2 = 1, fn;
    for(int i = 3; i <= 93; i++){
        fn = f1 + f2;
        if(n == fn) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}