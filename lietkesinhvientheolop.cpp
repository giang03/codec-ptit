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
    string getLop(){
        return lop;
    }
};

int main() {
	SinhVien ds[1001];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for(i=0;i<N;i++){
            if(ds[i].getLop() == s)
            cout << ds[i];
        }
    }
    return 0;
}

