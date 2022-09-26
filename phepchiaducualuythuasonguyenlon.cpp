#include <bits/stdc++.h>

using namespace std;

long long powmod(long long a, long long b, long long m){
    long long tmp = 1;
    while(b){
        a%= m;
        if(b % 2 == 1){
            tmp *= a;
            tmp %= m;
        }
        a*=a;
        b/=2;
    }
    return tmp;
}


int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        long long b,m; cin >>b >> m;
        long long r = 0;
        for(int i = 0; i < a.size(); i++){
            r = r*10 + a[i] - '0';
            r %= m;
        }
        cout << powmod(r,b,m) << endl;
    }
    return 0;
}