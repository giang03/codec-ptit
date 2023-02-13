#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main() {
	int t; cin >>t;
    while(t--){
        int n; cin >> n ;
        int a[n];
        map <int,int> ma;
        for(int &x : a){ 
            cin >> x;
            ma[x]++;
        }
        int m = ma.size();
        pair<int ,int> pa[m];
        int i = 0;
        for(auto x : ma){
            pa[i].first = x.first;
            pa[i++].second = x.second;
        }
        sort(pa,pa+m,cmp);
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < pa[i].second; j++){
                cout << pa[i].first << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

