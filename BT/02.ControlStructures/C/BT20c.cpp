#include<iostream>
using namespace std;

#define int long long 

signed main(){
    int money;
    int interest;
    cin>> money;
    for (int i=1;i<=12;i++) {
        interest=money*0.02;
        money+=interest;
    }
    cout<< money;
    return 0;
}