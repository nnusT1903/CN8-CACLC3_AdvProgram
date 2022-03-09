#include<bits/stdc++.h>

using namespace std;

void add_one(int x[],int sz){
    for (int i=0;i<sz;i++) x[i]++;
    cout<< "Dia chi cua parameter x: "<< x<< endl;
}

void add_class(string str){
    str+= " K66 CA CLC3";
    cout<< "Dia chi cua parameter str: "<< &str<< endl;
}

signed main(){
    string s="TsunN";
    int a[1000];
    int const sz=10;
    for (int i=0;i<sz;i++) a[i]=i;
    cout<< "Dia chi cua argument a: "<< a<< endl;
    for (int i=0;i<sz;i++) {
        cout<< a[i]<< " ";
        cout<< endl;
    }
    add_one(a,sz);
    for (int i=0;i<sz;i++) {
        cout<< a[i]<< " ";
        cout<< endl;
    }
    cout<< "Dia chi cua argument s: "<< &s<< endl;
    cout<< s<< endl;
    add_class(s);
    cout<< s<< endl;

    return 0;
    
}