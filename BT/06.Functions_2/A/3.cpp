#include <bits/stdc++.h>

using namespace std;

double H(int N) { 
   if (N == 1) return 1.0;
   return H(N) + 1.0/N; 
}

signed main(){
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}
//với input: 1, chương trình sẽ in ra 1 rồi ngừng(do có case riêng n==1)
//với input khác 1,sau một lúc:
//chương trình sẽ tự động dừng, không trả về bất cứ giá trị nào.
//do N k bị giảm, đệ quy không đưa về được base case.