#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        int b[n] = {0};
        int j = 0;
        for(int &x : a) cin >> x;
        for(int i = 0; i < n; i++){
            if(a[i] == a[i + 1]){
                a[i] *= 2;
                a[i + 1] = 0;
            }
            if(a[i] != 0){
                b[j++] = a[i];
            }
        }
        for(int x : b){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}