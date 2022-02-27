#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

signed main(){
    ld a,b,c;
    cin>> a>> b>> c;
    ld delta=b*b-4*a*c;
    if (delta==0){
        cout<< -b/2/a;
    }
    else if (delta>0){
        cout<< (-b-sqrt(delta))/2/a<< endl;
        cout<< (-b+sqrt(delta))/2/a;
    }
    else{
        cout<< -b/2/a<< -sqrt(-delta)/2/a << "i" << endl;
        cout<< -b/2/a<< "+"<< sqrt(-delta)/2/a << "i" << endl;
    }
}