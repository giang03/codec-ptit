#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, k,b; cin >> n >> b >> k;
    int a[n+1] = {0};
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        a[x] = 1;
    }
    int dem = 0, res = b;
    for(int i = 1; i <= b; i++){
        if(a[i] == 1) dem++;
    }
    res = dem;
    for(int i = b+1; i <= n; i++){
        if(a[i - b] == 1) dem--;
        if(a[i] == 1) dem++;
        res = min(res,dem);
    }
    cout << res << endl;
    return 0;
}