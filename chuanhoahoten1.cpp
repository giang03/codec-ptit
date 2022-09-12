#include <bits/stdc++.h>

using namespace std;

void chuanhoa1(vector <string> v){
    cout << v.back() << ' ';
    for(int i = 0; i < v.size() - 1;i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}
void chuanhoa2(vector <string> v){
    for(int i = 1; i < v.size();i++){
        cout << v[i] << ' ';
    }
    cout << v[0];
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cin.ignore();   
        string s; getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector <string> v;
        while(ss >> tmp){
            tmp[0]=(char)toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                tmp[i] = (char)tolower(tmp[i]);
            }
            v.push_back(tmp);
        }
        if(n == 1){
            chuanhoa1(v);
        }
        else chuanhoa2(v);
    }
    return 0;
}