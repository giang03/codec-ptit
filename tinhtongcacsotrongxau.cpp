#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        int ans = 0;
        for(int i = 0; i < n.size(); i++){
            if(isalpha(n[i]))
                n[i] = ' ';
        }
        stringstream ss(n);
        string tmp = "";
        while(ss >> tmp){
            ans += stoi(tmp);
        }
        cout << ans << endl;
    }
    return 0;
}