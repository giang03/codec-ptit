#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll c[5002];
    c[0] = c[1] = 1;
    for(int i = 2; i <= 5001; i++){
        c[i] = 0;
        for(int j = 0; j < i; j++){
            c[i] += c[j]*c[i-j-1];
        }
    }
    cout << c[n+1] << endl;
    return 0;
}