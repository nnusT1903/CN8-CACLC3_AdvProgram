#include <bits/stdc++.h>

using namespace std;

long F(int n) { 
   if (n == 0) return 0; 
   if (n == 1) return 1; 
   return F(n-1) + F(n-2); 
}

signed main(){
    int n=5000;
    cout << F(n);
    return 0;
}
//với input nhỏ(trong đó có case input 5000)
//chương trình chạy hoàn toàn bình thường.
//với input lớn, chương trình sẽ chậm hơn rõ ràng 
//và có thể xảy ra lỗi runtime khi input đủ lớn.