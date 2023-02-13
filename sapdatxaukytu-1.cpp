#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
        map <char,int> ma;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            ma[s[i]]++;
            res = max(res,ma[s[i]]);
        }
        if(res <= (s.size()+1)/2){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
	}
    return 0;
}