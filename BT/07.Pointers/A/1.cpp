#include<iostream>
using namespace std;

int* weird_sum(int a, int b) {
    int c = a + b;
    return &c;
}
//truy cap vao vung nho da bi thu hoi

int main(){
    int a, b;
    cin >> a >> b;
    cout << weird_sum(a, b) << endl;
    return 0;
}
//output luon la 0