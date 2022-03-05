#include<bits/stdc++.h>
char c[]={1,2,3,4,5,10,20,30};
using namespace std;

int main(){
    c[-1]=89;
    c[10]=255;
    for (int i=0;i<8;i++) cout<< c[i]<< " ";
    return 0;
}