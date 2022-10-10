#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define PI 3.141592653589793238

struct Point{
    double x,y;
    void nhap(){
        cin >> x >> y;
    }
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x,2) + pow(a.y-b.y,2));
}

int main(){
    int t; cin >> t;
    while(t--){
        Point A,B,C;
        A.nhap(); B.nhap();C.nhap();
        double a,b,c;
        a = distance(A,B); b= distance(B,C); c = distance(A,C);
        if(a + b > c && b + c > a && a + c > b){
            double s = 0.25*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
            double r = (a*b*c)/(4*s);
            cout << fixed << setprecision(3) << PI*r*r << endl;
        }
        else{
            cout << "INVALID" << endl;
        }
    }
    return 0;
}