#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
        int a[n],b[n];
        int res = 0;
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int i = 0; i < n; i++){
            int suma= 0, sumb = 0;
            for(int j = i; j < n; j++){
                suma += a[j]; sumb += b[j];
                if(suma == sumb){
                    res = max(res,j - i + 1);
                }
            }
        }
        cout << res << endl;
	}
    return 0;
}