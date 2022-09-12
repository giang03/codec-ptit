

#include <bits/stdc++.h>

using namespace std;


int prime[1000001];

void sang(){
    for(int i = 0; i <= 1e6; i++)
        prime[i] = 1;
    for(int i = 2; i <= 1000; i++){
        if(prime[i]){
            for(int j = i*i; j <= 1e6; j+=i){
                prime[j] = 0;   
            }
        }
    }
}

int main(){
    int t; cin >> t;
    sang();
    while(t--){
        long long n; cin >> n;
        int dem = 0;
        for(int i = 2; i <= sqrt(n); i++){
            if(prime[i]){
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}