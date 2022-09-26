#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void sub(string a, string b){
    int n1 = a.size(), n2 = b.size(), n = 0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int x[n1],y[n1],ans[n1];
    for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
    for(int i = n2; i < n1; i++){
        y[i] = 0;
    }
    int nho = 0;
    for(int i = 0;i < n1; i++){
        int tmp = x[i] - y[i] - nho;
        if(tmp >= 0){
            ans[i] = tmp;
            nho = 0;
        }
        else {
            ans[i] = 10 + tmp;
            nho = 1;
        }
    }
    for(int i = n1 - 1; i >= 0; i--) cout << ans[i];
    cout << endl;
}

int main(){
	int t; cin >> t; 
	while(t--){
		string x,y; cin >> x >> y;
        if(x.size() > y.size() || (x.size() == y.size() && x > y))
            sub(x,y);
        else sub(y,x);
    }   
    return 0;
}