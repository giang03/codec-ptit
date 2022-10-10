#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien{
    int stt;
    string msv,ten,lop,mail,dn;
    void nhap(int i){
        stt = i;
        cin >> msv;
        cin.ignore();
        getline(cin,ten);
        cin >> lop >> mail >> dn;
    }
    void in(){
        cout << stt << ' ' << msv << ' ' << ten << ' ' << lop << ' ' <<mail << ' ' << dn << endl;
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

int main(){
    int n; cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) ds[i].nhap(i+1);
    sort(ds,ds+n,cmp);
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(ds[i].dn == s){
                ds[i].in();
            }
        }
    }
    return 0;
}