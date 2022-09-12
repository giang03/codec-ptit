#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        long long tmp = 0;
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                tmp += s[i]- '0';
            }
            else tmp -= s[i] - '0';
        }
        if(tmp % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}