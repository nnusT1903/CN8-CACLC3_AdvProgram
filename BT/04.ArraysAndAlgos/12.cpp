#include<bits/stdc++.h>

using namespace std;
#define N 100005

signed main(){
    bool check[N + 1];
    for (int i = 2; i <= N; i++) {
        check[i] = true;
    }
    
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
            }
        }
    }

    int x;
    cin >> x;
    for(int i=2;i<=x;i++){
        if(check[i] == true) {
            cout << i << " ";
        }
    }
    return 0; 
}