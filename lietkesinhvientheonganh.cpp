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
    string getmsv(){
        return ma;
    }
    string getlop(){
        return lop;
    }
};

string nganh(string s){
    stringstream ss(s); 
    string res=""; 
    string tmp; 
    while(ss>>tmp){ 
        res+=toupper(tmp[0]); 
    } 
    return res.substr(0,2); 
}

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
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]); 
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for(i=0;i<N;i++){
            if(nganh(s)=="AT" || nganh(s)=="CN"){ 
                if(ds[i].getlop()[0]!='E' && nganh(s)==ds[i].getmsv().substr(5,2)) 
                    cout<<ds[i]; 
            } 
            else{ 
                if(nganh(s)==ds[i].getmsv().substr(5,2)) 
                    cout<<ds[i]; 
            }
        }
    }
    return 0;
}

