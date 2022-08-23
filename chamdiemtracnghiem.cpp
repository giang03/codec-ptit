#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	char de101[] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D','\0'};
	char de102[] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B','\0'};
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dem = 0;
		if(n == 101){
			for(int i = 0; i < 15; i++){
				char x; cin >> x;
				if(x == de101[i]) dem++;
			}
		}
		else{
			for(int i = 0; i < 15; i++){
				char x; cin >> x;
				if(x == de102[i]) dem++;
			}
		}
		cout << fixed << setprecision(2) << (double)dem * 2 / 3 << endl;
	}
    return 0;
}

