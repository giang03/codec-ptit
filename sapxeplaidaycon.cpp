#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int id1 = -1, id2 = -1;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                id1 = i;
            }
        }Ư
    }
    return 0;
}