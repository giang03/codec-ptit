

#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int dem = 0;
        int i = 1;
        while(i <= n/i){
            if(n % i == 0){
                if( i % 2 == 0) dem++;
                if(n/i% 2 == 0) dem++;
                if(n/i == i && i%2 == 0) dem--;
            }
            i++;
        }
        cout << dem << endl;
    }
    return 0;
}