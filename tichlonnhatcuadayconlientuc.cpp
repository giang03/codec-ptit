#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxProduct(ll *arr, int n){
    ll minVal = arr[0];
    ll maxVal = arr[0];
    ll maxPro = arr[0];
    for(int i = 1 ;i < n; i++){
        if(arr[i] < 0){
            swap(maxVal,minVal);
        }
        maxVal = max(arr[i], maxVal*arr[i]);
        minVal = min(arr[i], minVal*arr[i]);
        maxPro = max(maxPro,maxVal);
    }
    return maxPro;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+5];
        for(int i = 0;i < n;i++) cin >> a[i];
        cout << maxProduct(a,n) << endl;
    }
    return 0;
}