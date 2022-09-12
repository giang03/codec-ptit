#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ten,lop,ns;
    float diem;
};

void nhapThongTinSV(SinhVien &a){
    getline(cin , a.ten);
    cin >> a.lop;
    cin  >> a.ns;
    cin >> a.diem;
}

void inThongTinSV(SinhVien a){
    cout << "N20DCCN001" << ' ' << a.ten << ' ' << a.lop << ' ';
    for(int i = 0; i < a.ns.size(); i++){
        if(a.ns[i + 1] == '/' && isdigit(a.ns[i-1]) == 0){
            cout << '0';
        }
        cout << a.ns[i];
    }
    cout << ' ' << fixed << setprecision(2) << a.diem;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}