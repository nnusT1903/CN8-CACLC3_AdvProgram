#include<bits/stdc++.h>
using namespace std;

char* pad_right(const char* a,int n){
    if (strlen(a)>=n) {
        char* result=new char[strlen(a)+1];
        for (int i=0;i<strlen(a);i++)
            result[i]=a[i];
        result[strlen(a)]='\0';
        return result;
    }
    else{
        char* result=new char[n+1];
        for (int i=0;i<strlen(a);i++)
            result[i]=a[i];
        for (int i=strlen(a);i<n;i++)
            result[i]='-';
        result[n]='\0';
        return result;
    }
}

signed main(){
    char temp[]="TsunN Pads Right";
    char* demo=temp;
    char* result=pad_right(demo,40);
    cout<< demo<< endl;
    cout<< result<< endl;
    
    return 0;
}