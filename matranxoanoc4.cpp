#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int b[n*n];
    for(int i = 0; i < n*n; i++){
        cin >> b[i];
    }
    sort(b,b+n*n);
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    int k = 0;
    while(h1 <= h2 && c1 <= c2){
        for(int i = h1; i <= h2; i++){
            a[c1][i] = b[k++];
        }
        c1++;
        for(int i = c1; i <= c2; i++){
            a[i][h2]= b[k++];
        }
        h2--;
        for(int i = h2; i >= h1; i--){
            a[c2][i] = b[k++];
        }
        c2--;
        for(int i = c2; i >= c1; i--){
            a[i][h1] = b[k++];
        }
        h1++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}