#include<bits/stdc++.h>
using namespace std;

char* pad_left(const char* a,int n){
    if (strlen(a)>=n) {
        char* result=new char[strlen(a)+1];
        for (int i=0;i<strlen(a);i++)
            result[i]=a[i];
        result[strlen(a)]='\0';
        return result;
    }
    else{
        char* result=new char[n+1];
        int add=n-strlen(a);
        for (int i=0;i<add;i++)
            result[i]='-';
        for (int i=add;i<n;i++)
            result[i]=a[i-add];
        result[n]='\0';
        return result;
    }
}

signed main(){
    char temp[]="TsunN Pads Left";
    char* demo=temp;
    char* result=pad_left(demo,40);
    cout<< demo<< endl;
    cout<< result<< endl;
    
    return 0;
}