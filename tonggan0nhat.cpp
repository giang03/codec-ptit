

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int res = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j != i){
                    int sum = a[i] + a[j];
                    if(abs(res) > abs(sum)){
                        res = sum;
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}