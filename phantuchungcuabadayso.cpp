#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n1,n2,n3; cin >> n1 >> n2 >> n3;
        ll a[n1],b[n2],c[n3];
        bool ok = 1;
        int i = 0, j = 0, k = 0;
        map <ll,int> ma,ma2;
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        for(ll &x : c) cin >> x;
        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && a[i] == c[k]){
                cout << a[i] << ' ';
                ok = 0;
                i++; j++; k++;
            }
            else if(a[i] > b[j]){
                j++;
            }
            else if(a[i] > c[k]){
                k++;
            }
            else if(b[j] > a[i]){
                i++;
            }
            else if(b[j] > c[k]){
                k++;
            }
            else if(c[k] > a[i]){
                i++;
            }
            else if(b[j] < c[k]){
                j++;
            }
        }
        if(ok) cout << -1;
        cout << endl;
    }
    return 0;
}