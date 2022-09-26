#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien{
    string ten,lop,ngaysinh,ma;
    double gpa;
    void nhapsv(){
        cin.ignore();
        getline(cin,ten);
        getline(cin,lop);
        getline(cin,ngaysinh);
        cin >> gpa;
    }
    void insv(){
        cout << ma << ' ';
        stringstream ss(ten);
        string tmp;
        while(ss >> tmp){
            tmp[0] = char(toupper(tmp[0]));
            for(int i = 1; i < tmp.size(); i++){
                tmp[i] = char(tolower(tmp[i]));
            }
            cout << tmp << ' ';
        }
        if(ngaysinh[2] != '/'){
            ngaysinh.insert(0,"0");
        }
        if(ngaysinh[5] != '/')
            ngaysinh.insert(3,"0");
        cout << lop << ' ' << ngaysinh << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};

void nhap(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        string tmp =  to_string(i+1);
        tmp.insert(0,3-tmp.size(),'0');
        a[i].ma = "B20DCCN" + tmp;
        a[i].nhapsv();
    }
}

void in(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        a[i].insv();
    }
}

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n){
    sort(a,a+n,cmp);
}

int main(){
    struct SinhVien ds[50];
	int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}