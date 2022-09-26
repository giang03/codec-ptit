#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tongcs(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int tong(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        if(sum > 9) sum = tong(sum);
        n /= 10;
    }
    return sum;
}

int main(){
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(tong(tongcs(s)) == 9){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}