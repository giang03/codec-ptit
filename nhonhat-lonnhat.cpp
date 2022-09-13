#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,s; cin >> m >> s;
    int tmp = s;
    int lon[m] = {0}, nho[m] = {0};
    if(s > 9*m || (s == 0 && m > 1)){
        cout << "-1 -1" << endl;
        return 0;
    }
    for(int i = 0; i < m; i++){
        if(s >= 9){
            lon[i] = 9;
            s -= 9;
        }
        else if(s != 0){
            lon[i] = s;
            s = 0;
        }
        else break;
    }
    s = tmp;
    s--;
    for(int i = m - 1; i > 0; i--){
        if(s >= 9){
            nho[i] = 9;
            s-=9;
        }
        else if(s != 0){
            nho[i] = s;
            s = 0;
        }
        else break;
    }
    nho[0] = s + 1;
    for(int x : nho) cout << x;
    cout << " ";
    for(int x : lon) cout << x;
    return 0;
}