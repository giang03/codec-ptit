#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien{
    string ten,lop,ngaysinh;
    double gpa;
    void nhapsv(){
        cin.ignore();
        getline(cin,ten);
        getline(cin,lop);
        getline(cin,ngaysinh);
        cin >> gpa;
    }
    void insv(){
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
        a[i].nhapsv();
    }
}

void in(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        string ma =  to_string(i+1);
        ma.insert(0,3-ma.size(),'0');
        cout << "B20DCCN" << ma << ' ';
        a[i].insv();
    }
}

int main(){
    struct SinhVien ds[50];
	int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}