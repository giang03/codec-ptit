#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
private:
    string ma,ten,lop,ns;
    double gpa;
public : 
    friend istream& operator >> (istream& in, SinhVien &x){
        x.ma = "B20DCCN001";
        getline(in,x.ten);
        in >> x.lop >> x.ns >> x.gpa;
        if(x.ns[2] != '/') x.ns = "0" + x.ns;
        if(x.ns[5] != '/') x.ns.insert(3,"0");
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien x){
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.ns << ' ';
        out << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}