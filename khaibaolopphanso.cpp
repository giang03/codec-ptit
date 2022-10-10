#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo{
private:
    ll tu,mau;
public :
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
    void rutgon(){
        ll r = __gcd(tu,mau);
        tu /= r;
        mau /= r;
    }
};

int main(){
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}