#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int k; cin >> k;
        int dem = 0;
        for(int i = 0; i < s.size(); i++){
            unordered_set <char> se;
            for(int j = i; j < s.size(); j++){
                se.insert(s[j]);
                if(se.size() == k){
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}