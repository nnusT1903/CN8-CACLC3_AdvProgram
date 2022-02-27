#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long
#define inf INT_MAX

signed main(){
    int cnt = 1;
    int n;
    int a;
    int maxx,minn;
    cin >> n;
    while(n--) {
        cin >> a;
        if(cnt ==1 ){
            cnt--;
            maxx = a;
            minn = a;
        }
        else{
            maxx = max(maxx,a);
            minn = min(minn,a);
        }
    }
    cout << maxx << endl;
    cout << minn;
    return 0;
}