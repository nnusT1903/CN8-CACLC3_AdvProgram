#include <bits/stdc++.h>
using namespace std;

void swap_by_value(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<< "Dia chi cua parameter a (pass_by_value): "<< &a<< endl;
    cout<< "Dia chi cua paremeter b (pass_by_value): "<< &b<< endl;
}
// Dia chi khac nhau
void swap_by_reference(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
    cout<< "Dia chi cua parameter a (pass_by_reference): "<< &a<< endl;
    cout<< "Dia chi cua paremeter a (pass_by_reference): "<< &b<< endl;
}
// Dia chi giong nhau

signed main(){
    int x,y;
    x=1;
    y=2;
    cout<< x<< " "<< y<< endl;
    cout<< "Dia chi cua argument x: "<< &x<< endl;
    cout<< "Dia chi cua argument y: "<< &y<< endl;
    swap_by_value(x,y);
    cout<< x<< " "<< y<< endl;
    swap_by_reference(x,y);
    cout<< x<< " "<< y<< endl;
    return 0;
}