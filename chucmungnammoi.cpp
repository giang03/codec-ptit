#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    set <string> se;
    cin.ignore();
    for(int i = 0; i < t; i++){
        string s;
        getline(cin,s);
        se.insert(s);
    }
    cout << se.size() << endl;
    return 0;
}