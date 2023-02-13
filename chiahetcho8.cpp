#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int chiaHet(string a, int x){
    int dem = 0;
    for(int i = 0; i < a.size(); i++){
        int r = 0;
        for(int j = i; j < a.size(); j++){
            r = r*10 + (a[j] -'0');
            r %= x;
            if(r == 0) dem++;
        }
    }
    return dem;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << chiaHet(s,8) - chiaHet(s,24) << endl;
    }
    return 0;
}