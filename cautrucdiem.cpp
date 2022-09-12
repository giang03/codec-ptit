#include <bits/stdc++.h>

using namespace std;

struct Point{
    double x, y;
};

void input(struct Point &p){
    cin >> p.x >> p.y;
}

double distance(struct Point a, struct Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}