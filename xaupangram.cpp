#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        getchar();
        string s;
        getline(cin,s);
        int k; cin >> k;
        set <char> se;
        for(int i = 0; i < s.size(); i++){
            se.insert(s[i]);
        }
        int l = se.size();
        if(s.size() >= 26 && l + k >= 26){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}