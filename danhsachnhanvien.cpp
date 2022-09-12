#include <bits/stdc++.h>

using namespace std;

int ok = 0;
struct NhanVien{
    string ten,gioitinh,ngaysinh,diachi,thue,ngaykhd;
};

void nhap(struct NhanVien &a){
    if(ok == 0) cin.ignore();
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    getline(cin,a.ngaysinh);
    getline(cin,a.diachi);
    getline(cin,a.thue);
    getline(cin,a.ngaykhd);
    ok = 1;
}


void inds(struct NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        string ma =  to_string(i+1);
        ma.insert(0,5-ma.size(),'0');
        cout << ma << ' ' << a[i].ten << ' ' << a[i].gioitinh << ' ' ;
        for(int j = 0; j < a[i].ngaysinh.size(); j++){
            if(a[i].ngaysinh[j + 1] == '/' && isdigit(a[i].ngaysinh[j-1]) == 0){
                cout << '0';
            }
            cout << a[i].ngaysinh[j];
        }
        cout << ' ' << a[i].diachi << ' ' << a[i].thue << ' ';
        for(int j = 0; j < a[i].ngaykhd.size(); j++){
            if(a[i].ngaykhd[j + 1] == '/' && isdigit(a[i].ngaykhd[j-1]) == 0){
                cout << '0';
            }
            cout << a[i].ngaykhd[j];
        }
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for( i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}