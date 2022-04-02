#include<bits/stdc++.h>
using namespace std;

//compiled with c++98
char* concat(const char* s1, const char* s2){
    int length1=strlen(s1);
    int length2=strlen(s2);
    char* result= new char[length1+length2+1];
    strncpy(result,s1,length1);
    strncpy(result+length1,s2,length2);
    result[length1+length2+1]='\0';
    return result;
}

signed main(){
    char s1[]="Dang ";
    char s2[]="Sy Duy";
    const char* x1=s1;
    const char* x2=s2;
    char* result=concat(x1,x2);
    cout << result; //Dang Sy Duy
    return 0;
}
