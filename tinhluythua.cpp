#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long x,y,p; cin >> x >> y >> p;
        long long tmp = 1;
        while(y){
            x %= p;
            if(y % 2 == 1){
                tmp *= x;
                tmp %= p;
            }
            x*=x;
            y/=2;
        }
        cout << tmp << endl;
    }
    return 0;
}