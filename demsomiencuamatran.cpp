#include <bits/stdc++.h>

using namespace std;
pair <int,int> path[] = {{-1,0},{0,-1},{1,0},{0,1},{-1,1},{1,-1},{-1,-1},{1,1}};

void Try(int a[][200], int n, int m, int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int inew = i + path[k].first;
        int jnew = j + path[k].second;
        if(inew >= 0 && inew < n && jnew >= 0 && inew < m){
            if(a[inew][jnew] == 1){
                Try(a,n,m,inew,jnew);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n][200];
        int  dem = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    dem++;
                    Try(a,n,m,i,j);
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}