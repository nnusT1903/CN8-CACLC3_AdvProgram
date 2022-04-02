#include<bits/stdc++.h>
using namespace std;

char* truncate(const char* a, int n){
    if (strlen(a)<=n){
        char* result=new char[strlen(a)+1];
        for (int i=0;i<strlen(a);i++){
            result[i]=a[i];
        }
        result[strlen(a)]='\0';
        return result;
    }
    else{
        char* result=new char[n+1];
        for (int i=0;i<n;i++){
            result[i]=a[i];
        }
        result[n]='\0';
        return result;
    }
}

signed main(){
    char str[]="Dang Sy Duy";
    char* x=str;
    char* result=truncate(x,5);
    cout<< str<< endl;
    cout<< result<< endl;
    return 0;
}