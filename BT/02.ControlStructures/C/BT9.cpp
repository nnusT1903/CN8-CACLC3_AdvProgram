#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

int res =0;

signed main(){
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        res += str[i]-'0';
    }
    cout << res;
    return 0;
}