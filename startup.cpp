#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int,double> a, pair<int,double> b){
    return a.second > b.second;
}

int main(){
    int n; cin >> n;
    pair <int, double> pa[n];
    for(int i = 0; i < n; i++){
        double x,a,b; 
        cin >> x>> a >> b;
        pa[i].first = x;
        pa[i].second = a*0.7 + b*0.3;
    }
    stable_sort(pa,pa + n,cmp);
    int res = pa[6].second;
    int a[7];
    for(int i = 0; i < n; i++){
        if(pa[i].second >= res){
            a[i] = pa[i].first;
        }
    }
    sort(a,a+n);
    for(int x : a){
        cout << x << ' ';
    }
    return 0;
}