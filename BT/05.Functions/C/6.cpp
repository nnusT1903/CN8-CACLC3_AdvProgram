#include<bits/stdc++.h>
using namespace std;

#define int long long 

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

signed main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}