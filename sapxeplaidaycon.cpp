#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n],x[n];
        int min_id = 0,max_id = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            x[i] = a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            if(x[i] != a[i]){
                min_id = i + 1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(x[i] != a[i]){
                max_id = i + 1;
                break;
            }
        }
        cout << min_id << ' ' << max_id << endl;
    }
    return 0;
}