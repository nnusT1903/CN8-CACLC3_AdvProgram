#include<bits/stdc++.h>
using namespace std;

signed main(){
    int* p = new int;
    cout<< p<< endl;

    int* p2=p;
    cout<< p2<< endl;

    *p=10;
    delete p;
    cout<< p<< endl;
    cout<< p2<< endl;

    *p2=100;
    cout<< *p2<< endl;
    cout<< p2<< endl;
    delete p2;

    return 0;
}
/**
 *Output:
    0xf31790
    0xf31790
    0xf31790
    0xf31790
    100
    0xf31790
 */