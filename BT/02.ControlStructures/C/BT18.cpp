#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

signed main(){
    ld x,sum=0;
    int cnt=0;
    while (1){
        cin>> x;
        if (x>=0 && x<=10){
            cnt++;
            sum+=x;
        }
        else if (x>10) continue;
        else break;
    }
    cout<< sum/cnt;
    return 0;
}