#include <bits/stdc++.h>

using namespace std;

void print(int a[]){
    cout<<&a<<" "<<&a[0]<<endl;
}

signed main(){
    int a[]={1,2,3,4,5,6};
    cout<<&a<<" "<<&a[0]<<endl;
    print(a);
    return 0;
}

//địa chỉ phần tử đầu tiên giống nhau
//địa chỉ mảng khác nhau