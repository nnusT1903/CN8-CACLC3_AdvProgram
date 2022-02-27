#include<iostream>
using namespace std;

#define int long long

signed main(){
    float money;
    cin>> money;
    money*=0.91;
    float VAT=0;
    float temp=money;
    if (temp>1000000){
        temp-=1000000;
        VAT+=0;
    }
    else {
        VAT=0;
        cout<< VAT<< " "<< money-VAT;
        return 0;
    }
    if (temp>500000) {
        temp-=500000;
        VAT+=500000*0.1;
    }
    else {
        VAT+=temp*0.1;
        cout<< VAT<< " "<< money-VAT;
        return 0;
    }
    if (temp>500000) {
        temp-=500000;
        VAT+=500000*0.15;
    }
    else {
        VAT+=temp*0.15;
        cout<< VAT<< " "<< money-VAT;
        return 0;
    }
    if (temp>0) {
        VAT+=temp*0.20;
        cout<< VAT<< " "<< money-VAT;
        return 0;
    }

}