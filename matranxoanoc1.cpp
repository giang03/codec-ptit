#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int b[m*n];
        int c1 = 0, c2 = n - 1, h1 = 0, h2 = m - 1;
        int k = 0;
        while(h1 <= h2 && c1 <= c2){
            for(int i = h1; i <= h2; i++){
                b[k++]  = a[c1][i];
            }
            c1++;
            for(int i = c1; i <= c2; i++){
                b[k++]  = a[i][h2];
            }
            h2--;
            for(int i = h2; i >= h1; i--){
                b[k++]  = a[c2][i];
            }
            c2--;
            for(int i = c2; i >= c1; i--){
                b[k++] = a[i][h1];
            }
            h1++;
        }
        for(int i = 0; i < m*n; i++){
            cout << b[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}