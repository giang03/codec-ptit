#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class KhachHang{
private : 
    string ma,ten,gioitinh,ngaysinh,diachi;
public:
    void nhap(int i){
        string tmp = to_string(i);
        while(tmp.size()<3) tmp = "0"+tmp;
        this->ma = "KH" + tmp;
        getline(cin,ten);
        getline(cin,gioitinh);
        getline(cin,ngaysinh);
        getline(cin,diachi);
    }
    void in(){
        cout << this->ten << ' ' << this->diachi << ' ';
    }
    string getMa(){
        return ma;
    }
};

class MatHang{
private:
    string ma,ten,donvi;
    ll gm,gb;
public:
    void nhap(int i){
        string tmp = to_string(i);
        while(tmp.size()<3) tmp = "0"+tmp;
        this->ma = "MH" + tmp;
        cin.ignore();
        getline(cin,ten);
        getline(cin,donvi);
        cin >> gm >> gb;
    }
    void in(){
        cout << this->ten << ' ' << this->donvi << ' ' << this->gm << ' ' << this->gb << ' ';
    }
    ll getGb(){
        return gb;
    }
    string getMa(){
        return ma;
    }
};

class HoaDon : public KhachHang, public MatHang{
private:
    string mhd,mkh,mmh;
    int sl;
public :
    void nhap(int i){
        string tmp = to_string(i);
        while(tmp.size()<3) tmp = "0"+tmp;
        this->mhd = "HD" + tmp;
        cin >> mkh >> mmh >> sl;
    }
    void in(KhachHang x, MatHang y){
        cout << this->mhd << ' ';
        x.in(); y.in();
        cout << sl << ' ' <<this->sl * y.getGb() << endl;
    }
    string getMkh(){
        return mkh;
    }
    string getMmh(){
        return mmh;
    }
};

int main(){
	int n,m,k;
    cin >> n;
    cin.ignore();
    KhachHang kh[n];
    for(int i = 0; i < n; i++){
        kh[i].nhap(i+1);
    }
    cin >> m;
    MatHang mh[m];
    for(int i = 0; i < m; i++){
        mh[i].nhap(i+1);
    }
    cin >> k;
    HoaDon hd[k];
    for(int i = 0; i < k; i++){
        hd[i].nhap(i+1);
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            for(int l = 0; l < m;l++){
                if(hd[i].getMkh() == kh[j].getMa() && hd[i].getMmh() == mh[l].getMa())
                    hd[i].in(kh[j],mh[l]);
            }
        }
    }
    return 0;
}