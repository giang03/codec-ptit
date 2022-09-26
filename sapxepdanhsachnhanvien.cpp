#include <bits/stdc++.h>

using namespace std;

int ok = 0;
struct NhanVien{
    string ma,ten,gioitinh,ngaysinh,diachi,thue,ngaykhd;
    void in(){
        cout << ma << ' ' << ten << ' ' << gioitinh << ' ' << ngaysinh << ' ' << diachi << ' ' << thue << ' ' << ngaykhd << endl;
    }
};

void nhap(NhanVien &a){
        if(ok == 0) cin.ignore();
        string tmp =  to_string(ok+1);
        tmp.insert(0,5-tmp.size(),'0');
        a.ma = tmp;
        getline(cin,a.ten);
        getline(cin,a.gioitinh);
        getline(cin,a.ngaysinh);
        getline(cin,a.diachi);
        getline(cin,a.thue);
        getline(cin,a.ngaykhd);
        ok++;
    }

void inds(struct NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        a[i].in();
    }
}
bool cmp(NhanVien a, NhanVien b){
    stringstream ss(a.ngaysinh);
    stringstream ss2(b.ngaysinh);
    string tmp;
    int t1[3];
    int t2[3];
    int i = 0, j = 0;
    while(getline(ss,tmp,'/')){
        t1[i] = stoi(tmp);
        i++;
    }
    while(getline(ss2,tmp,'/')){
        t2[j] = stoi(tmp);
        j++;
    }
    if(t1[2] != t2[2]){
        return t1[2] < t2[2];
    }
    if(t1[0] != t2[0]){
        return t1[0] < t2[0];
    }
    return t1[1] < t2[1];
}
void sapxep(NhanVien a[], int n){
    sort(a,a+n,cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}