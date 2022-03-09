#include<bits/stdc++.h>
using namespace std;

long double x;

int rnd(long double x){
    if(abs(x-trunc(x))<0.5){
        if(x>0) return floor(x);
        else return ceil(x);
    }
    else{
        if(x>0) return ceil(x);
        else return floor(x);
    }
}

// ints

signed main(){
    cin >> x;
    cout << rnd(x);
    return 0;
}