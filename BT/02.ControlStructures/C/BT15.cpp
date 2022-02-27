#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

bool isPerfectSquare(int x){
    int s = sqrt(x);
    return (s*s == x);
}
 
bool isFibonacci(int n){
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

signed main(){
    int n;
    cin >> n;
    if(isFibonacci(n)){
        cout << "Yes" ;
        return 0;
    }
    cout << "No";
    return 0;
}