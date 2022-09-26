#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string t = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '4'){
                t += "223";
            }
            else if(s[i] == '6') t += "35";
            else if(s[i] == '8') t += "2227";
            else if(s[i] == '9') t += "2337";
            else if(s[i] != '0' && s[i] != '1') t += s[i];
        }
        sort(t.begin(),t.end(),greater<char>());
        cout << t << endl;
    }
    return 0;
}