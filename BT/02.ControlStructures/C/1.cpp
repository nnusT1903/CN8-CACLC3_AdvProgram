#include<bits/stdc++.h>

using namespace std;

#define int long long

bool is_prime(int x){
    if (x<2) return false;
    for (int i=2;i<=sqrt(x);i++) {
        if (x%i ==0) {
            return false;
        }
    }
    return true;
}

signed main(){
    int x;
    cin>> x;
    if (is_prime(x)) {
        cout << "Yes";
        return 0;
    }
    cout<< "No";
    return 0;
}