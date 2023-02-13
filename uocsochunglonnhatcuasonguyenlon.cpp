#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll chiaLayDu(ll a, string b){
    ll r = 0;
    for(int i = 0; i < b.size(); i++){
        r = r*10 + (b[i] -'0');
        r %= a;
    }
    return r;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll a;
        string b;
        cin >> a >> b;
        cout << __gcd(a,chiaLayDu(a,b)) << endl;
    }
    return 0;
}