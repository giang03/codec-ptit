#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >>t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n],b[m];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        cout << 1ll*(*min_element(b,b+m))*(*max_element(a,a+n)) << endl;
    }
    return 0;
}

