#include <bits/stdc++.h>
using namespace std;

int factorial(int x){
    if (x==1) return 1;
    else{
        cout<<"x="<< x<< " at "<< &x<< endl;
        return x*factorial(x-1);
    }
    //cach nhau 48 bytes.
}

signed main(){
    int n=5;
    int t=factorial(5);
    return 0;
}