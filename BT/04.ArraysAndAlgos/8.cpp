#include<bits/stdc++.h>

using namespace std;
typedef long double ld;

bool cmp(ld a, ld b){
    return a<b;
}

signed main(){
    int n;
    cin >> n;
    ld a[10001], b[10001];
    for(int i = 0 ; i< n;i++){
        cin >> a[i] >> b[i];
    }
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}