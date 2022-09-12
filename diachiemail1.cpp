#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin ,s);
    stringstream ss(s);
    string tmp;
    vector <string> v;
    while(ss >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = (char)tolower(tmp[i]);
        }
        v.push_back(tmp);
    }
    cout << v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn" << endl;
    return 0;
}