#include<bits/stdc++.h>
using namespace std;

#define int long long
int n;
int a[400010];
int ans =0;

signed main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        ans += a[i]*(n-i-1);
    }
    cout << ans;
    return 0;
}