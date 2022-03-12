#include <bits/stdc++.h>

using namespace std;

double H(int N) { 
   return H(N-1) + 1.0/N; 
}

signed main(){
    int n;
    cin >> n;
    cout << H(n);
    return 0;
}
//sau một lúc, chương trình sẽ tự động dừng, không trả về bất cứ giá trị nào.
//do thiếu base case, chương trình sẽ đệ duy vô số lần 