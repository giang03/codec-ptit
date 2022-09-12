#include <bits/stdc++.h>

using namespace std;

int main(){
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
    for(int i = 0; i < v.size(); i++){
        if(i == v.size()-1){
            for(int j = 1; j < v[i].size(); j++){
                v[i][j] = (char)toupper(v[i][j]);
            }
        }
        if(i != v.size() - 2)
            cout << v[i] << ' ';
        else cout << v[i] << ", ";
    }
    return 0;
}