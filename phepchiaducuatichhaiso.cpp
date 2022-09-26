

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        long long b, c; cin >> b >> c;
        long long res = 0;
        for(int i = 0; i < a.size(); i++){
            res = res*10 + b*(a[i] - '0');
            res %= c;
        }
        cout << res << endl;
    }
    return 0;
}