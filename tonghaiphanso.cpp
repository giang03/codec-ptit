#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long a,b;
};

void nhap(struct PhanSo &a){
    cin >> a.a >> a.b;
}

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

void rutgon(struct PhanSo &a){
    long long x = gcd(a.a,a.b);
    a.a = a.a/x;
    a.b = a.b/x;
}

PhanSo tong(struct PhanSo a, struct PhanSo b){
    PhanSo t;
    rutgon(a); rutgon(b);
    int x = gcd(a.b,b.b);
    long long mau = 1ll * a.b / x * b.b;
    a.a = mau / a.b * a.a;
    b.a = mau / b.b * b.a;
    t.a = a.a + b.a;
    t.b = mau;
    return t;
}

void in(struct PhanSo a){
    cout << a.a << '/' << a.b;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}