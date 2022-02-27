#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

bool check(int x){
    return (int)sqrt(x)*(int)sqrt(x)==x;
}

signed main(){
    int n;
    cin >> n;
    if(check(n)){
        cout << "Yes" ;
        return 0;
    }
    cout << "No";
    return 0;
}