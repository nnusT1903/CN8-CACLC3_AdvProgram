#include<iostream>
using namespace std;

int f(int a[]){
    return sizeof(a);
}

int main(){
    int a[100005];
    cout<<sizeof(a)<<endl;
    cout<<f(a);
    return 0;
}
//2 output khac nhau
// sizeof(a) tra ve gia tri 4*kich co mang duoc khai bao
// f(a) luon tra ve 8, do dai dia chi trong he thap luc phan