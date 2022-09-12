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

void in(struct PhanSo a){
    cout << a.a << '/' << a.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}