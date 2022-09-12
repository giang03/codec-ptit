

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n - 1];
        map <int,int> mp;
        for(int &x : a){
            cin >> x;
            mp[x] = 1;
        }
        for(int i = 1; i <= n; i++){
            if(mp[i] == 0 ){
                 cout << i << endl;
                 break;
            }
        }
    }
    return 0;
}