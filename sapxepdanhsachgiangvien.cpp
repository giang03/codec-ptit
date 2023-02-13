#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class GiangVien{
private :
    string ma,hten,mon;
public :
    void nhap(int i){
        string tmp = to_string(i);
        while(tmp.size() < 2) tmp = "0"+ tmp;
        this->ma = "GV" + tmp;
        getline(cin,this->hten);
        string res;
        getline(cin,res);
        stringstream ss(res);
        string temp;
        while(ss >> temp){
            this->mon += toupper(temp[0]);
        }
    }
    void in(){
        cout << this->ma << ' ' << this->hten << ' ' << this->mon << endl;
    }
    string getTen(){
        string tmp;
        stringstream ss(this->hten);
        string res = "";
        while(ss >> tmp){
            res = tmp;
        }
        return res;
    }
    string getMa(){
        return ma;
    }
};

bool cmp(GiangVien a, GiangVien b){
    if(a.getTen() != b.getTen())
        return a.getTen() < b.getTen();
    return a.getMa() < b.getMa();
}

int main(){
	int n; cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap(i+1);
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++){
        a[i].in();
    }
    return 0;
}