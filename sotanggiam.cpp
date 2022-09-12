

#include <bits/stdc++.h>

using namespace std;

bool nt(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

bool checktangdan(int n){
    int a = n%10;
    n/=10;
    while(n){
        if(a <= n%10) return 0;
        a = n%10;
        n/=10;
    }
    return 1;
}
bool checkgiamdan(int n){
    int a = n%10;
    n/=10;
    while(n){
        if(a >= n%10) return 0;
        a = n%10;
        n/=10;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a = pow(10,n-1), b = pow(10,n);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if ((checkgiamdan(i) || checktangdan(i)) && nt(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}