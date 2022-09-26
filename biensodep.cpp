#include <bits/stdc++.h>

using namespace std;

bool checktangdan(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] <= s[i-1]) return 0;
    }
    return 1;
}

bool checkbang(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1]) return 0;
    }
    return 1;
}

bool checkbang2(string s){
    for(int i = 1; i < 3; i++){
        if(s[i] != s[i-1]) return 0;
    }
    for(int i = 4; i < s.size(); i++){
        if(s[i] != s[i-1]) return 0;
    }
    return 1;
}
bool check68(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string tmp = "";
        for(int i = 5; i < s.size(); i++){
            if(isdigit(s[i])){
                tmp += s[i];
            }
        }
        if(checktangdan(tmp) || checkbang(tmp) || checkbang2(tmp) || check68(tmp))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}