#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool tn(ll n){
    string t = to_string(n);
    string tmp = t;
    reverse(t.begin(),t.end());
    return tmp == t;
}

int main(){
    int cnt = 0;
    for(int i = 1000000; i <= 9999999; i++){
        if(tn(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}