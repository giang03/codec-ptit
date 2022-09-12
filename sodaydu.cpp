#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        getchar();
        string s; cin >> s;
        set <int> se;
        bool ok = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] < '0' || s[i] > '9' || s[0] == '0'){
                cout << "INVALID" << endl;
                ok = 0;
                break;
            }
            else {
                int x = s[i] - '0';
                se.insert(x);
            }
        }
        if(ok){
            if(se.size() == 10){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}