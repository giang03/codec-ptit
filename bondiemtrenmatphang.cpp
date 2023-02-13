#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Point{
    ll x,y,z;
    void nhap(){
        cin >> x >> y >> z;
    }
};

Point vectorDoan(Point a, Point b){
    Point c;
    c.x = b.x - a.x;
    c.y = b.y - a.y;
    c.z = b.z - a.z;
    return c;
}

Point tichCoHuong(Point a, Point b){
    Point c;
    c.x = a.y*b.z - a.z*b.y;
    c.y = a.z*b.x - a.x*b.z;
    c.z = a.x*b.y - a.y*b.x;
    return c;
}

bool checkMatPhang(Point a, Point b, Point c, Point d){
    Point e = tichCoHuong(vectorDoan(a,b),vectorDoan(a,c));
    ll tmp = e.x*(d.x-c.x) + e.y*(d.y-c.y) + e.z*(d.z-c.z);
    if(tmp == 0) return true;
    return false;
}

int main(){
	int t; cin >> t;
    while(t--){
        Point a,b,c,d;
        a.nhap();b.nhap();c.nhap();d.nhap();
        if(checkMatPhang(a,b,c,d)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}