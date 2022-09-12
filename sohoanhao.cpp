#include <bits/stdc++.h>
using namespace std;

long long tonguoc(long long n){
    long long sum = 1;
    for(int i = 2; i <= n/i; i++){
        if(n%i == 0){
            sum += i;
            if(i != n/i){
                sum += n/i;
            }
        }
    }
    return sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(tonguoc(n) == n) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}