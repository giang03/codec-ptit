#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        getchar();
        string s;
        getline(cin, s);
        int dem = 0;
        if(s[0] != ' ' && s[0] != '\t') dem = 1;
        for(int i = 0; i < s.size(); i++){
            if((s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\t') ||(s[i] == '\t' && s[i+1] != ' ' && s[i+1] != '\t'))
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}