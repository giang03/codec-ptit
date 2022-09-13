#include <bits/stdc++.h>

using namespace std;

int C[1001][3];

void tohop(){
    for(int i = 1; i <= 1e3; i++){
        for(int j = 1; j <= 2; j++){
            if(i == j) C[i][j] = 1;
            else if(j == 1) C[i][j] = i;
            else C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}

int main(){
    tohop();
    int t; cin >> t;
    while(t--){
        map <char,int> mp;
        string s; cin >> s;
        int dem = 0;
        for(int i = 0; i < s.size();i++){
            mp[s[i]]++;
        }
        for(auto x : mp){
            if(x.second > 1) dem += C[x.second][2];
            dem += x.second;
        }
        cout << dem << endl;
    }
    return 0;
}