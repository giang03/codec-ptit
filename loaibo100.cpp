#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string t = "100";
        int dem = 0;
        while(s.find(t) != -1 && s.size() > 3){
            s.erase(s.find(t),3);
            dem += 3;
        }
        if(dem) 
            cout << dem << endl;
    }
    return 0;
}