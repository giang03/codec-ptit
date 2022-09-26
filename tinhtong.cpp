#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main(){
    ifstream ifs {"DATA.in"};
    string s; ll sum = 0;
    while(ifs >> s){
        int ok = 1;
        int x = 0;
        if(s.size() < 10){
            for(int i = 0; i < s.size(); i++){
                if(isalpha(s[i])){
                    ok = 0;
                }
            }
        }
        else ok = 0;
        if(ok) 
            x = stoi(s);
        sum += x;
    }
    cout << sum << endl;
    ifs.close();
    return 0;
}