#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class SinhVien{
private :
    string ma,ten,lop,mail;
public :
    friend istream& operator >> (istream& in, SinhVien &x){
        in >> x.ma;
        in.ignore();
        getline(in,x.ten);
        in >> x.lop >> x.mail;
        return in;
    }
    friend ostream& operator << (ostream& out, SinhVien x){
        out << x.ma << ' ' << x.ten << ' ' << x.lop << ' ' << x.mail << endl;
        return out;
    }
    string getNganh(){
        string tmp ="";
        for(int i = 3; i < 7; i++){
            tmp+= ma[i];
        }
        return tmp;
    }
};

int main() {
	SinhVien ds[1001];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s; 
        getline(cin,s);
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        if(s == "KE TOAN") s = "DCKT";
        else if(s == "CONG NGHE THONG TIN") s = "DCCN";
        else if(s == "AN TOAN THONG TIN") s = "DCAT";
        else if(s == "VIEN THONG") s = "DCVT";
        else s = "DCDT";
        for(i=0;i<N;i++){
            if(ds[i].getNganh() == s)
            cout << ds[i];
        }
    }
    return 0;
}

