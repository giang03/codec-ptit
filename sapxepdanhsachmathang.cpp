#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct MatHang{
    string ten,nhom;
    int ma;
    double giamua,giaban;
    void nhap(){
        cin.ignore();
        getline(cin,ten);
        getline(cin,nhom);
        cin >> giamua >> giaban;
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << nhom << ' ' << fixed << setprecision(2) << giaban - giamua << endl;
    }
};

void nhapds(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        a[i].ma = i+1;
        a[i].nhap();
    }
}

void inds(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        a[i].in();
    }
}

bool cmp(MatHang a, MatHang b){
    return a.giaban - a.giamua > b.giaban - b.giamua;
}

void sapxep(MatHang a[], int n){
    sort(a,a+n,cmp);
}

int main(){
    struct MatHang ds[50];
	int N;
    cin >> N;
    nhapds(ds, N);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}