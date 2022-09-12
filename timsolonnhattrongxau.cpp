#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i]))
                s[i] = ' ';
        }
        stringstream ss(s);
        string tmp;
        int MAX = 0;
        while(ss >> tmp){
            int res = 0;
            for(int i = 0; i < tmp.size(); i++){
                res = (tmp[i]-'0') + res*10;
            }
            MAX = max(MAX,res);
        }
        cout << MAX << endl;
    }
    return 0;
}