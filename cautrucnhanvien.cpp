#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
    string ma,ten,gioitinh,ngaysinh,diachi,thue,ngaykhd;
};

void nhap(struct NhanVien &a){
    a.ma = "00001";
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    getline(cin,a.ngaysinh);
    getline(cin,a.diachi);
    getline(cin,a.thue);
    getline(cin,a.ngaykhd);
}


void in(struct NhanVien a){
    cout << a.ma << ' ' << a.ten << ' ' << a.gioitinh << ' ' ;
    for(int i = 0; i < a.ngaysinh.size(); i++){
        if(a.ngaysinh[i + 1] == '/' && isdigit(a.ngaysinh[i-1]) == 0){
            cout << '0';
        }
        cout << a.ngaysinh[i];
    }
    cout << ' ' << a.diachi << ' ' << a.thue << ' ';
    for(int i = 0; i < a.ngaykhd.size(); i++){
        if(a.ngaykhd[i + 1] == '/' && isdigit(a.ngaykhd[i-1]) == 0){
            cout << '0';
        }
        cout << a.ngaykhd[i];
    }
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}