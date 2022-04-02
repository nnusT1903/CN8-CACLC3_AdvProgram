#include<bits/stdc++.h>
using namespace std;

char* delete_char(const char* a,const char c){
    char* result= new char[strlen(a)+1];
    int cnt=0;
    for (int i=0;i<strlen(a);i++){
        if (a[i]!=c){
            result[cnt]=a[i];
            cnt++;
        }
    }
    result[cnt]='\0';
    return result;
}

signed main(){
    char str[]="Dang Sy Duy";
    char* x=str;
    char* result=delete_char(x,'y');
    cout<< str<< endl;
    cout<< result<< endl;
    //Dang S
    
    return 0;
}