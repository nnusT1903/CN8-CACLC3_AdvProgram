#include <bits/stdc++.h>

using namespace std;
#define int long long
int F(int n) { 
   if (n == 0) return 0; 
   if (n == 1) return 1; 
   return F(n-1) + F(n-2); 
}

void fib(int n) {
    int a = 0;
    int b = 1;
    if(n==0){
        cout << 0;
    }
    else if(n==1){
        cout << 1;
    }
    else{
        int temp;
        for(int i=0;i<n-1;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        cout << b;
    }
}

signed main(){
    int n;
    cin >> n;
    // cout << F(n);
    fib(n);
    return 0;
}

//cách dùng đệ quy sẽ tốn nhiều bộ nhớ hơn
//mỗi lần đệ quy sẽ phải tính lại các số Fibonacci đứng trước do không có mảng lưu
//cách dùng vòng for đơn giản nhưng 2 biến liền trước luôn được lưu sẵn
//nên sẽ tìm ra kết quả nhanh hơn.