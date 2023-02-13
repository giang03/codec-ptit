#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string dnmon(string s){
    string res;
    stringstream ss(s);
    string temp;
    while(ss >> temp){
        res += toupper(temp[0]);
    }
    return res;
}

class GiangVien{
private :
    string ma,hten,mon;
public :
    void nhap(int i){
        string tmp = to_string(i);
        while(tmp.size() < 2) tmp = "0"+ tmp;
        this->ma = "GV" + tmp;
        getline(cin,this->hten);
        getline(cin,this->mon);
        this->mon = dnmon(this->mon);
    }
    void in(){
        cout << this->ma << ' ' << this->hten << ' ' << this->mon << endl;
    }
    string getMon(){
        return mon;
    }
};

int main(){
	int n; cin >> n;
    cin.ignore();
    GiangVien a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap(i+1);
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s; getline(cin,s);
        s = dnmon(s);
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        for(int i = 0; i < n; i++){
            if(a[i].getMon() == s)
                a[i].in();
        }
    }
    return 0;
}