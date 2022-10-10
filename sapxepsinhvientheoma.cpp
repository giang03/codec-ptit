#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class SinhVien{
private :
    string ma,ten,lop,mail;
public :
    friend istream& operator >> (istream& in, SinhVien &x){
        in >> x.ma;
        in.ignore();
        getline(in,x.ten);
        in >> x.lop >> x.mail;
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien x){
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.mail << endl;
        return out;
    }
    string getMa(){
        return ma;
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.getMa() < b.getMa();
}

int main() {
	SinhVien ds[1001];
    SinhVien x;
    int n = 0;
    while(cin >> x){
        ds[n++] = x;
    }
    sort(ds,ds+n,cmp);
    for(int i=0;i<n;i++){
        cout << ds[i];
    }
    return 0;
}

