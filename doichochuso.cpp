#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool difference(string s, string tmp){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != tmp[i]) cnt++;
    }
    return cnt == 2;
}

int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
        string tmp = s;
        if(is_sorted(s.begin(), s.end())) {
            cout << -1 << endl;
        }
        else {
            while (!difference(s, tmp)) {
                prev_permutation(s.begin(), s.end()); 
            } 
            cout << s << endl;
        }
	}
    return 0;
}