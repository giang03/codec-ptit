#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        string tmp = "";
        for(int i = 0; i <= 100; i++){
            tmp += s[i];
        }
        while(tmp.back() != ' '){
            tmp.pop_back();
        }
        cout << tmp << endl;
    }
    return 0;
}