#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll ucln(ll a, ll b){
	if(b==0) return a;
	return ucln(b,a%b);
}

ll bcnn(ll a, ll b){
	return a/(ucln(a,b))*b;
}

int main() {
	int t; cin >> t; 
	while(t--){
		ll x, y, z, n; cin >> x >> y >> z >> n;
		ll res = bcnn(x,bcnn(y,z));
		ll a = pow(10, n-1), b = pow(10, n);
		ll Min = (a + res - 1)/res * res;
		if(Min >= b) cout << "-1\n";
		else
		{
		cout << Min << endl;
		}
	}
    return 0;
}