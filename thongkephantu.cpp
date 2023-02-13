#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	map <int,int> ma;
    int a[10001];
    int i = 0;
    int n; 
    while(cin >> n){
        ma[n]++;
        a[i++] = n;
    }
    for(int j = 0; j < i; j++){
        if(ma[a[j]] != 0){
            cout << a[j] << ' ' << ma[a[j]] << endl;
            ma[a[j]] = 0;
        }
    }
    return 0;
}

