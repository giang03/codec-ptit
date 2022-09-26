#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ifstream ifs {"DATA.in"};
    map <int,int> mp;
    int x; 
    while(ifs >> x){
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << ' ' << it.second << endl;
    }
    ifs.close();
    return 0;
}