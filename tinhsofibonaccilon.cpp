#include <bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;
int fibo[1001];

void sofibo(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 1001; i++){
        fibo[i] = 0;
        fibo[i] = fibo[i-1]+ fibo[i-2];
        fibo[i] %= MOD;
    }
}

int main(){
    sofibo();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}