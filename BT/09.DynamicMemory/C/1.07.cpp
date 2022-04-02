#include<bits/stdc++.h>
using namespace std;

char* trim_right(const char* a){
    char* result=new char[strlen(a)+1];
    int cnt=strlen(a)-1;
    while (a[cnt]==' ' && cnt>=0) cnt--;
    for (int i=0;i<=cnt;i++) result[i]=a[i];
    result[cnt+1]='\0';
    return result;
}

signed main(){
    char demo[]="TsunN.     ";
    char* x=demo;
    char* result=trim_right(x);
    cout<< demo<< endl;
    cout<< result<< endl;
    return 0;

}