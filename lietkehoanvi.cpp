#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n,a[100];

void khoitao(){
    for(int i = 1 ; i <= n; i++){
        a[i] = i;
    }
}

int main(){
	int t; cin >> t;
    while(t--){
        cin >> n; khoitao();
        do{
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << ' ';
        }while(next_permutation(a+1,a+n+1));
        cout << endl;
    }
    return 0;
}