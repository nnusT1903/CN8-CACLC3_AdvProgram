#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long
#define maxn 100005

signed main(){
    int n;
    cin>> n;
    ld scr[4*maxn],num[4*maxn];
    bool check_scr=true,check_num=true;
    for (int i=0;i<n;i++){
        cin>> scr[i];
        if (scr[i]<0 || scr[i]>10) {
            check_scr=false;
        }
        cin>> num[i];
        if (num[i]!=1.0 && num[i]!=1.5 && num[i]!=2.0 && num[i]!=2.5 && num[i]!=3.0) {
            check_num=false;
        }
    }
    if (!check_scr) {
        cout<< "Sai diem so";
        return 0;
    }
    else if (!check_num) {
        cout<< "Sai he so";
        return 0;
    }
    else{
        cout<< "Tong so mon hoc can tinh DTB: "<< n<< endl;
        ld sumd=0,sumh=0;
        for (int i=0;i<n;i++){
            cout<<"Diem mon hoc "<< i<<": "<< scr[i]<< endl;
            cout<<"He so mon hoc "<< i<<": "<< num[i]<< endl;
            sumd+=scr[i]*num[i];
            sumh+=num[i];
        }
        cout<< "Tong so he so: "<< sumh<< endl;
        cout<< "Diem trung binh cua "<< n<<" mon hoc: "<< sumd/sumh;
    }
}