#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

double FtoC(double x){
    return (x-32)*5/9;
}

double CtoK(double x){
    return x+273.15;
}

signed main(){
    double min,max,step;
    cin>> min>> max>> step;
    cout<< setprecision(2) << fixed;
    while (min<=max){
        cout<< min<<" "<< FtoC(min)<<" "<< CtoK(FtoC(min))<< endl;
        min+=step;
    }
    return 0;
}