#include <bits/stdc++.h>

using namespace std;

int path[4] = {6,2,4,8};

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int tmp = 0;
        int k = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(k == 0) tmp += s[i] - '0';
            else 
                tmp += (s[i] - '0') *path[k%4];
            k++;
            tmp %= 10;
        }
        if(tmp ==0 || tmp == 5){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
    return 0;
}