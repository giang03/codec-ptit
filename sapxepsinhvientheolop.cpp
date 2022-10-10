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
    string getMa(){
        return ma;
    }
};

bool cmp(SinhVien a, SinhVien b){
    if(a.getLop() != b.getLop())
        return a.getLop() < b.getLop();
    return a.getMa() < b.getMa();
}

int main() {
	SinhVien ds[1001];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sort(ds,ds+N,cmp);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

