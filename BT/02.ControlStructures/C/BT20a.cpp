#include<iostream>
using namespace std;

#define int long long

signed main(){
    int time;
    cin>> time;
    int sum=0;
    if (time>100){
        time-=100;
        sum+=100*12000;
    }
    else {
        sum+=time*12000;
        cout<< sum;
        return 0;
    }
    if (time>50) {
        time-=50;
        sum+=50*16000;
    }
    else {
        sum+=time*16000;
        cout<< sum;
        return 0;
    }
    if (time>50) {
        time-=50;
        sum+=50*20000;
    }
    else {
        sum+=time*20000;
        cout<< sum;
        return 0;
    }
    if (time>0) {
        sum+=time*25000;
        cout<< sum;
        return 0;
    }
}