#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;

int c[1001][1001];

void tohop(){
    for(int i = 1; i < 1001; i++){
        for(int j = 1; j < 1001; j++){
            if(i == j ) c[i][j] = 1;
            else if(j == 1) c[i][j] = i;
            else c[i][j] = c[i-1][j] + c[i-1][j-1];
            c[i][j] %= MOD;
        }
    }
}

int main(){
    tohop();
    int t; cin >> t;
    while(t--){
        int n , k; cin >> n >> k;
        cout << c[n][k] << endl;
    }
    return 0;
}