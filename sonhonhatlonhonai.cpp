#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int t; cin >>t;
    while(t--){
        int n; cin >> n ;
        int a[n],b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int m = *max_element(a,a+n);
        for(int i = 0; i < n; i++){
            auto it = upper_bound(b,b+n,a[i]);
            if(a[i] != m){
                cout << *it << ' ';
            }
            else{
                cout << "_ " ;
            }
        }
        cout << endl;
    }
    return 0;
}

