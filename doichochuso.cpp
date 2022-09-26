#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
        bool ok = 1;
        for(int i = s.size() - 1 ; i > 0; i--){
            if(s[i] < s[i - 1]){
                swap(s[i],s[i-1]);
                ok = 0;
                break;
            }
        }
        if(ok) cout << -1 << endl;
        else 
            cout << s << endl;
	}
    return 0;
}