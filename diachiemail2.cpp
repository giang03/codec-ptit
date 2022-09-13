#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    map <string,int> mp;
    while(t--){
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
        string res = v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i++){
            res += v[i][0];
        }
        mp[res]++;
        if(mp[res] > 1){
            cout << res << mp[res];
        }
        else cout << res;
        cout << "@ptit.edu.vn" << endl;
    }
    return 0;
}