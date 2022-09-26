#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ifstream ifs {"VANBAN.in"};
    set <string> se;
    string x; 
    while(ifs >> x){
        for(int i = 0; i < x.size(); i++){
            x[i] = char(tolower(x[i]));
        }
        se.insert(x);
    }
    for(string x : se){
        cout << x << endl;
    }
    ifs.close();
    return 0;
}