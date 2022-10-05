#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int k = 1;

class SinhVien{
private :
    string ma,ten,lop,ngaysinh;
    double gpa;
public :
    friend istream& operator >> (istream& in, SinhVien &x){
        in.ignore();
        string tmp;
        tmp = to_string(k);
        x.ma = "B20DCCN";
        while(tmp.size() < 3){
            tmp = "0" + tmp;
        }
        x.ma += tmp;
        k++;
        getline(in,x.ten);
        in >> x.lop >> x.ngaysinh >>x.gpa;
        if(x.ngaysinh[2] != '/') x.ngaysinh = "0" + x.ngaysinh;
        if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3,"0");
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien x){
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.ngaysinh << ' ';
        out << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};

int main() {
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

