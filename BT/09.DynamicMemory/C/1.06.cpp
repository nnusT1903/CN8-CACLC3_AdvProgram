#include<bits/stdc++.h>
using namespace std;

char* trim_left(const char* a){
    char* result=new char[strlen(a)+1];
    int cnt=0;
    while (a[cnt]==' ' && cnt<strlen(a)) cnt++;
    for (int i=cnt;i<strlen(a);i++) result[i-cnt]=a[i];
    result[strlen(a)-cnt]='\0';
    return result;
}

signed main(){
    char demo[]=" TsunN. ";
    char* x=demo;
    char* result=trim_left(x);
    cout<< demo<< endl;
    cout<< result<< endl;
    return 0;

}