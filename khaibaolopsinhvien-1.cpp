#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
private:
    string ma,ten,lop,ns;
    double gpa;
public : 
    void nhap(){
        ma = "B20DCCN001";
        getline(cin,ten);
        cin >> lop >> ns >> gpa;
        if(ns[2] != '/') ns = "0" + ns;
        if(ns[5] != '/') ns.insert(3,"0");
    }
    void xuat(){
        cout << ma << ' ' << ten << ' ' << lop << ' ' << ns << ' ';
        cout << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}