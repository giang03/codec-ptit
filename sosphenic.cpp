

#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    int tmp = n;
    int res = 1;
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        int dem = 0;
        if(n % i == 0){
            while(n % i == 0){
                res *= i;
                cnt++;
                dem++;
                n/=i;
            }
            if(dem > 1) return 0;
        }
    }
    if(n != 1){
        cnt++; 
        res *= n;
    }
    if(cnt != 3 || res != tmp)  return 0;
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(check(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}