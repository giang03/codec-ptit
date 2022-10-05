#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ma,ten,lop;
    double d1,d2,d3;
    void in(){
        cout << ma << ' ' << ten << ' ' << lop << ' ';
        cout << fixed << setprecision(1) << d1 << ' ' << d2 << ' ' << d3 << endl;
    }
};

void nhap(SinhVien &a){
    cin.ignore();
    getline(cin,a.ma);
    getline(cin,a.ten);
    getline(cin,a.lop);
    cin  >> a.d1 >> a.d2 >> a.d3;
}

void in_ds(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << ' ';
        a[i].in();
    }
}

bool cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

void sap_xep(SinhVien a[], int n){
    sort(a,a+n,cmp);
}

int main(){
    int n; 
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
        }
        sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}