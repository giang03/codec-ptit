#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll cata[10000];

void sang(){
    cata[0] = cata[1] = 1;
    for(int i = 2; i < 10000; i++){
        
    }
}

int main(){
	sang();
    int n; cin >> n;
    ll tmp = 0;
    for(int i = 0; i < n; i++){
        tmp += cata[i]*cata[n-i];
    }
    return 0;
}