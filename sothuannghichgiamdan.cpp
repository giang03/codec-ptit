#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool tn(string s){
    int l = 0, r = s.size()-1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.first.size() != b.first.size())
        return a.first.size() > b.first.size();
    return a.first > b.first;
}

int main(){
    string s;
    map <string,int> ma;
    while(cin >> s){
        if(tn(s) && s.size() > 1){
            ma[s]++;
        }
    }
    int n = ma.size();
    pair <string,int> pa[n];
    int i = 0;
    for(auto x : ma){
        pa[i].first = x.first;
        pa[i++].second = x.second;
    }
    sort(pa,pa+n,cmp);
    for(int i = 0; i <n; i++){
        cout << pa[i].first << ' ' << pa[i].second << endl;
    }
    return 0;
}