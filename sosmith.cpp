#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool prime[1000001];
void sang(){
    for(int i = 0; i <= 1e6; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1e3; i++){
        if(prime[i]){
            for(int j = i*i; j <= 1e6; j+=i)
                prime[j] = 0;
        }
    }
}

int tongcs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int tonguoc(int n){
    int tong = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            tong += tongcs(i);
            n/=i;
        }
    }
    if(n != 1) tong += tongcs(n);
    return tong;
}

int main() {
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(!prime[n] && tongcs(n) == tonguoc(n)) 
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
