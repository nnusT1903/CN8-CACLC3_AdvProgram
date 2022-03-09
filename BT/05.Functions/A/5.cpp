#include <bits/stdc++.h>

using namespace std;

signed main(){
    int a=5;
    int& refa=a;
    cout<< "Dia chi cua a: "<< &a<< endl;
    cout<< "Dia chi cua refa: "<< &refa<< endl;
    // Output:
    //    Dia chi cua a: 0x61fe14    | ==> a,refa chi la 2 ten cua 1 bien trong bo nho
    //    Dia chi cua refa: 0x61fe14  |
    
    //int& refb; ==> Khong the khai bao 1 tham chieu ma chua chieu ngay toi mot bien thuong

    // int& refc =a;
    // cout<< refc<< endl;       Doan lenh loi==> khong the tham chieu mot bien toi mot bien khac khong phai dich ban dau cua no
    // int b=10;
    // &refc= &b;
    // cout<< refc<< endl;
}