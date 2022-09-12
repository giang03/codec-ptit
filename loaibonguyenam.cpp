#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = (char)tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            cout << '.' << s[i];
        }
    }
    return 0;
}