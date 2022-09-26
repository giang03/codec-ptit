#include <bits/stdc++.h>

using namespace std;

struct Nguoi{
    string ten,ns;
    void nhap(){
        cin >> ten >> ns;
    }
    void in(){
        cout << ten << endl;
    }
};

bool cmp(Nguoi a, Nguoi b){
    stringstream ss(a.ns);
    stringstream ss2(b.ns);
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
    if(t1[1] != t2[1]){
        return t1[1] < t2[1];
    }
    return t1[0] < t2[0];
}
void sapxep(Nguoi a[], int n){
    sort(a,a+n,cmp);
}

int main(){
    int n; cin >> n;
    Nguoi a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    sapxep(a,n);
    a[n-1].in();
    a[0].in();
    return 0;
}