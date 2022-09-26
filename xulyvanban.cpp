#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string tmp;
    vector <string> v;
    while(cin >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = (char)tolower(tmp[i]);
            if(tmp[i] == '.' || tmp[i] == '?' || tmp[i] == '!'){
                tmp[i] = '\n';
            }
        }
        v.push_back(tmp);
    }
    if(v.size() != 0) v[0][0] = (char)toupper(v[0][0]);
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i][v[i].size() - 1] != '\n')
            cout << v[i] << ' ';
        else{
            cout << v[i];
            v[i+1][0] = (char)toupper(v[i+1][0]);
        }
    }
    cout << v[v.size() - 1] << ' ';
    return 0;
}