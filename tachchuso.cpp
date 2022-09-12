#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        getchar();
        string s; cin >> s;
        multiset <char> se;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                sum += s[i] - '0';
            }
            else {
                se.insert(s[i]);
            }
        }
        for(char x : se){
            cout << x ;
        }
        cout << sum << endl;
    }
    return 0;
}