#include <bits/stdc++.h>

using namespace std;

int check(int a[][200], int n, int x){
    for(int i = 0; i < n; i++){
        bool ok = 0;
        for(int j = 0; j < n; j++){
            if(a[i][j] == x) ok = 1;
        }
        if(ok == 0) return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][200];
        int res = 0, dem = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                res = max(res,a[i][j]);
            }
        }
        for(int i = 0; i <= res; i++){
            if(check(a,n,i)){
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}