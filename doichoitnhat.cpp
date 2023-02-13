#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
        int a[n],b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]) cnt++;
        }
        cout << (cnt+1)/2 << endl;
	}
    return 0;
}