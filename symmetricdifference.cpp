#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    vector <int> v;
    map<int,int> ma;
    for(int &x : a) {
        cin >> x;
        ma[x] = 1;
    }
    for(int &x : b) {
        cin >> x;
        if(ma[x] == 1){
            ma[x] = 2;
        }
    }
    for(int x : a){
        if(ma[x] != 2 && ma[x] != -1){
            v.push_back(x);
            ma[x] = -1;
        }
    }
    for(int x : b){
        if(ma[x] != 2 && ma[x] != -1){
            v.push_back(x);
            ma[x] = -1;
        }
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}