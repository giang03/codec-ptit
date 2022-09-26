#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int t; cin >> t; 
	while(t--){
		string x,y; cin >> x >> y;
        int n = max(x.size(),y.size());
        int m = min(x.size(),y.size());
        string a;
        if(x.size() >= y.size()){
            a = x;
        }
        else a = y;
        int tmp[n+1];
        int k = 0;
        int nho = 0;
        for(int i = m - 1; i >= 0; i--){
            tmp[k] = (x[x.size() - k - 1] - '0' + y[y.size() - k - 1] - '0' + nho) % 10;
            if(x[x.size() - k- 1] - '0' + y[y.size() - k- 1] - '0' + nho > 9){
                nho = 1;
            }
            else nho = 0;
            k++;
        }
        for(int i = n - m - 1; i >= 0; i--){
            tmp[k] = (a[i] - '0' + nho) % 10;
            if(a[i] - '0' + nho > 9){
                nho = 1;
            }
            else nho = 0;
            k++;
        }
        if(nho) cout << nho;
        for(int i = n - 1 ;i >= 0; i--)cout << tmp[i];
        cout << endl;
	}
    return 0;
}