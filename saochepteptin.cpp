#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s;
    ifstream ifs{"PTIT.in"};
    ofstream ofs{"PTIT.out"};
    while(ifs >> s){
        ofs << s << endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}