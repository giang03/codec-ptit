#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n], b[m];
        set <int> hop;
        map <int,int> giao;
        int res = 0;
        for(int &x : a){
            cin >> x;
            hop.insert(x);
            giao[x] = 1;
            res = max(res ,x);
        }
        for(int &x : b){
            cin >> x;
            hop.insert(x);
            if(giao[x] == 1){
                giao[x] = 2;
            }
        }
        for(int x : hop){
            cout << x << ' ';
        }
        cout << endl;
        for(int i = 0; i <= res ; i++){
            if(giao[i] == 2){
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}