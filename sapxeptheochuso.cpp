#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(string a, string b){
    string x = a + b;
    string y = b + a;
    return x > y;
}

int main() {
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
        string a[n];
        for(string &x : a) cin >> x;
        sort(a,a+n,cmp);
        for(string x : a) cout << x;
        cout << endl;
	}
    return 0;
}