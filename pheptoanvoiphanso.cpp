#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

struct PhanSo{
    ll tu,mau;
};

void rutgon(PhanSo &a){
    ll tmp = __gcd(a.tu,a.mau);
    a.tu /= tmp;
    a.mau /= tmp;
}

PhanSo tong(PhanSo a, PhanSo b){
    rutgon(a); rutgon(b);
    PhanSo c;
    ll tmp = lcm(a.mau,b.mau);
    c.mau = tmp;
    c.tu = (tmp/a.mau)*a.tu + (tmp/b.mau)*b.tu;
    rutgon(c);
    return c;
}

void process(PhanSo a,PhanSo b){
    PhanSo x = tong(a,b);
    x.tu *= x.tu; x.mau*=x.mau;
    cout << x.tu <<'/'<< x.mau << ' ';
    PhanSo y;
    y.tu = a.tu*b.tu*x.tu;
    y.mau = a.mau*b.mau*x.mau;
    rutgon(y);
    cout << y.tu << '/' << y.mau << endl;
}

int main(){
	int t; cin >> t; 
	while(t--){
		PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
	}
    return 0;
}