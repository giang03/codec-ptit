#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin ,s2);
        map <string,int> mp1,mp2;
        stringstream ss1(s1);
        stringstream ss2(s2);
        string tmp;
        while(ss1 >> tmp){
            mp1[tmp] = 1;
        }
        while(ss2 >> tmp){
            mp2[tmp] = 1;
        }
        for(auto x : mp1){
            if(mp2[x.first] == 0){
                cout << x.first << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}