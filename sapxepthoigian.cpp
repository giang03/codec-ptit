#include <bits/stdc++.h>

using namespace std;

struct ThoiGian{
    int gio,phut,giay;
    void nhap(){
        cin >> gio >> phut >> giay;
    }
    void in(){
        cout << gio << ' ' << phut << ' ' << giay << endl;
    }
};

bool cmp(ThoiGian a, ThoiGian b){
    if(a.gio != b.gio) return a.gio < b.gio;
    if(a.phut != b.phut) return a.phut < b.phut;
    return a.giay < b.giay;
}

void sapxep(ThoiGian a[], int n){
    sort(a,a+n,cmp);
}
int main(){
    int n; 
    cin >> n;
    ThoiGian a[n];
    for(int i = 0; i < n; i++) a[i].nhap();
    sapxep(a,n);
    for(int i = 0; i < n; i++) a[i].in();
    return 0;
}