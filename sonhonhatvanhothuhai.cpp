

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set <int> se;
        for(int &x : a){
            cin >> x;
            se.insert(x);
        }
        if(se.size() == 1) cout << -1 << endl;
        else{
            cout << *se.begin() << ' ' << *(++se.begin()) << endl;
        }
    }
    return 0;
}