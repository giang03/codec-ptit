#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ma,ten,lop,ngaysinh;
    float diem;
};

void nhap(struct SinhVien &a){
    a.ma = "B20DCCN001";
    getline(cin,a.ten);
    getline(cin,a.lop);
    getline(cin,a.ngaysinh);
    cin >> a.diem;
}


void in(struct SinhVien a){
    cout << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' ;
    for(int i = 0; i < a.ngaysinh.size(); i++){
        if(a.ngaysinh[i + 1] == '/' && isdigit(a.ngaysinh[i-1]) == 0){
            cout << '0';
        }
        cout << a.ngaysinh[i];
    }
    cout << ' ' << fixed <<setprecision(2) << a.diem;
}

int main() {
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}