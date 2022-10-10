#include <bits/stdc++.h>

using namespace std;

int ok = 0;
class NhanVien{
private :
    string ten,gioitinh,ngaysinh,diachi,thue,ngaykhd;
public :
    void nhap(){
        getline(cin,ten);
        getline(cin,gioitinh);
        getline(cin,ngaysinh);
        getline(cin,diachi);
        getline(cin,thue);
        getline(cin,ngaykhd);
    }
    void xuat(){
        string ma =  "00001";
        cout << ma << ' ' << ten << ' ' << gioitinh << ' ' ;
        if(ngaysinh[2] != '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[5] != '/') ngaysinh.insert(3,"0");
        cout << ngaysinh << ' ' << diachi << ' ' << thue << ' ';
        if(ngaykhd[2] != '/') ngaykhd = "0" + ngaykhd;
        if(ngaykhd[5] != '/') ngaykhd.insert(3,"0");
        cout << ngaykhd << endl;
    }
};



int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}