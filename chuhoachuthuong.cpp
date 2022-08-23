#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int t; cin >> t;
	while(t--){
		char kitu; cin >> kitu;
		if(kitu >= 'a' && kitu <= 'z'){
			kitu -= 32;
		}
		else if(kitu >= 'A' && kitu <= 'Z'){
			kitu += 32;
		}
		cout << kitu << endl;
	}
    return 0;
}

