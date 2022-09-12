#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n = 0, c = 0 ,l = 0;
        char k=' ';
        while(k != '\n'){
            int x; cin >> x;
            if(x % 2 == 0) c++;
            else l++;
            n++;
            k = getchar();
        }
        if((c<l&& n %2 == 1) || (c > l && n %2 ==0))  
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}