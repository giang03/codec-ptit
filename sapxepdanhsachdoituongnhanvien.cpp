#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int k = 1;

class NhanVien{
private :
    string ma,ten,gioitinh,ngaysinh,diachi,mst,nkd;
public :
    friend istream& operator >> (istream& in, NhanVien &x){
        in.ignore();
        string tmp;
        tmp = to_string(k);
        x.ma = "";
        while(tmp.size() < 5){
            tmp = "0" + tmp;
        }
        x.ma += tmp;
        k++;
        getline(in,x.ten);
        in >> x.gioitinh >> x.ngaysinh;
        in.ignore();
        getline(in,x.diachi);
        in >> x.mst >> x.nkd;
        return in;
    }
    friend ostream& operator << (ostream& out, NhanVien x){
        out << x.ma << ' ' << x.ten << ' ' << x.gioitinh << ' ' << x.ngaysinh << ' ' << x.diachi << ' ' << x.mst << ' ' << x.nkd << endl;
        return out;
    }
    string getNs(){
        return ngaysinh;
    }
};

bool cmp(NhanVien a, NhanVien b){
    string t1="", t2 = "";
    for(int i = 6; i <= 9; i++){
        t1 += a.getNs()[i];
    }
    for(int i = 0; i <6; i++){
        if(a.getNs()[i] != '/'){
            t1 += a.getNs()[i];
        }
    }
    for(int i = 6; i <= 9; i++){
        t2 += b.getNs()[i];
    }
    for(int i = 0; i <6; i++){
        if(b.getNs()[i] != '/'){
            t2 += b.getNs()[i];
        }
    }
    return t1 < t2;
}

void sapxep(NhanVien ds[],int n){
    sort(ds,ds+n,cmp);
}

int main() {
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

