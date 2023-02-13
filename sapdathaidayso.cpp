#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >>m;
        int a[n],b[m];
        map <int,int> ma1,ma2;
        for(int &x : a){
            cin >> x;
            ma1[x]++;
        }
        for(int &x : b){
            cin >> x;
            ma2[x] = 1;
        }
        sort(a,a+n);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < ma1[b[i]]; j++){
                cout << b[i] << ' ';
            }
            ma1[b[i]] = 0;
        }
        for(int i = 0; i < n; i++){
            if(ma2[a[i]] == 0){
                cout << a[i] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}