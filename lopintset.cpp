#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	ifstream data;
    data.open("DATA.in");
    int n,m; data >> n >> m;
    int a[n],b[m];
    map <int , int> ma;
    for(int &x : a){
        data >> x;
        ma[x] = 1;
    }
    for(int &x : b){
        data >> x;
        if(ma[x] == 1){
            ma[x] = 2;
        }
    }
    for(auto x : ma){
        if(x.second == 2)
            cout << x.first << ' ';
    }
    data.close();
    return 0;
}

