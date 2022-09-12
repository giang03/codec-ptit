#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int l = 0, r = s.length() - 1;
    while(l <= r){
        int a = s[l] - '0';
        int b = s[r] - '0';
        if(a % 2 != 0 || b % 2 != 0 || a != b)
            return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    set <string> se;
    while(t--){
        cin.ignore();
        string s; cin >> s;
        if(check(s))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}