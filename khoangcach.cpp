#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		double x1,y1,x2,y2; 
		cin >> x1 >> y1 >> x2 >> y2;
		double kc = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
		cout << fixed << setprecision(4) << kc << endl;
	}
    return 0;
}

