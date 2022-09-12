

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool prime[1000001];
void sang(){
	for(int i = 0; i < 1000000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j <= 1000000; j+=i)
				prime[j] = 0;
		}
	}
}

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        int dem = 0;
        for(int i = 1; i < x; i++){
            if(gcd(i,x) == 1) dem++;
        }
        if(prime[dem]) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}