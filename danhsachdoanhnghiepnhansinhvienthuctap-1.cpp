#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class DoanhNghiep{
private :
    string ma,ten;
    int slsv;
public:
    friend istream & operator >> (istream & in, DoanhNghiep &x){
        in >> x.ma;
        in.ignore();
        getline(in,x.ten);
        in >> x.slsv;
        return in;
    }
    friend ostream& operator << (ostream & out, DoanhNghiep x){
        out << x.ma << ' ' << x.ten << ' ' << x.slsv << endl;
        return out;
    }
    int getSlsv(){
        return slsv;
    }
    string getMa(){
        return ma;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.getSlsv() != b.getSlsv())
        return a.getSlsv() > b.getSlsv();
    return a.getMa() < b.getMa();
}

int main(){
	int n; cin >> n;
    DoanhNghiep a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}