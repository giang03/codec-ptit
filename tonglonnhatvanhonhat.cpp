#include <bits/stdc++.h>

using namespace std;

long long somin(string a){
    long long x = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6'){
            x = x*10 + 5;
        }
        else x = x*10 + a[i] - '0';
    }
    return x;
}
long long somax(string a){
    long long x = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5'){
            x = x*10 + 6;
        }
        else x = x*10 + a[i] - '0';
    }
    return x;
}

int main(){
    int t; cin >> t;
    while(t--){
        getchar();
        string a,b;
        cin >> a >> b;
        cout << somin(a)+somin(b) << ' ' << somax(a)+somax(b) << endl;
    }
    return 0;
}