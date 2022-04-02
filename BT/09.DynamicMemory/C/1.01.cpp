#include<bits/stdc++.h>
using namespace std;

char* reverse(const char* a){
    char* result=new char[strlen(a)+1];
    for (int i=0,j=strlen(a)-1;i<strlen(a);i++,j--){
        result[i]=a[j];
    }
    result[strlen(a)+1]='\0';
    return result;
}

signed main(){
    char str[]="Dang Sy Duy";
    char* x=str;
    char*result=reverse(x);
    cout<< str<< endl;
    cout<< result<< endl;
    //yuD yS gnaD
    return 0;
}