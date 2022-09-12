

#include <bits/stdc++.h>

using namespace std;

int prime[10001];

void sang(){
    for(int i = 0; i <= 1e4; i++)
        prime[i] = i;
    for(int i = 2; i <= 100; i++){
        for(int j = i*i; j <= 1e4; j+=i){
            if(prime[j] == j){
                prime[j] = i;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    sang();
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            cout << prime[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}