#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

class PhanSo{
private:
    ll tu,mau;
public :
    PhanSo(){

    }
    PhanSo(ll tu, ll mau) {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream& operator >> (istream& in, PhanSo &x){
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream& operator << (ostream& out, PhanSo x){
        out << x.tu << '/' << x.mau << endl;
        return out;
    }
    PhanSo operator + (PhanSo khac){
        PhanSo x;
        ll tmp = lcm(abs(this->mau),abs(khac.mau));
        x.tu = tmp/this->mau*this->tu + tmp/khac.mau*khac.tu;
        x.mau = tmp;
        ll g = __gcd(abs(x.tu),abs(x.mau));
        x.tu /= g;
        x.mau /= g;
        return x;
    }
};

int main(){
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}