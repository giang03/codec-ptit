#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool tn(int a[],int n){
    int l = 0, r= n - 1;
    while(l < r){
        if(a[l] != a[r]) return 0;
        l++;r--;
    }
    return 1;
}

int main() {
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
        int n = s.size();
        int a[n];
        for(int i = 0; i<s.size(); i++){
            s[i] = char(tolower(s[i]));
            if(s[i] >='a' && s[i] <= 'c'){
                a[i] = 2;
            }
            else if(s[i] >='d' && s[i] <= 'f'){
                a[i] = 3;
            }
            else if(s[i] >='g' && s[i] <= 'i'){
                a[i] = 4;
            }
            else if(s[i] >='j' && s[i] <= 'l'){
                a[i] = 5;
            }
            else if(s[i] >='m' && s[i] <= 'o'){
                a[i] = 6;
            }
            else if(s[i] >='p' && s[i] <= 's'){
                a[i] = 7;
            }
            else if(s[i] >='t' && s[i] <= 'v'){
                a[i] = 8;
            }
            else {
                a[i] = 9;
            }
        }
        if(tn(a,n)) cout << "YES\n";
        else cout << "NO\n";
	}
    return 0;
}