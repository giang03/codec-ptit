#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	ifstream data1,data2;
    data1.open("DATA1.in");
    data2.open("DATA2.in");
    set <string> hop;
    map <string, int> giao;
    string tmp;
    while(data1 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        hop.insert(tmp);
        giao[tmp] = 1;
    }
    while(data2 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        hop.insert(tmp);
        if(giao[tmp] == 1){
            giao[tmp] = 2;
        }
    }
    for(string x : hop){
        cout << x << ' ';
    }
    cout << endl;
    for(auto x : giao){
        if(x.second == 2)
            cout << x.first << ' ';
    }
    data1.close();
    data2.close();
    return 0;
}

