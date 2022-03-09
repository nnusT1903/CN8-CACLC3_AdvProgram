#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define N   100005*4
bool check[N + 1];

void init(){
    memset(check, true, sizeof(check));
    check[0]=false;
    check[0]=false;

    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
            }
        }
    }
}

signed main(){
    init();
    int x;
    cin >> x;
    for(int i=2;i<=x;i++){
        if(check[i] == true) {
            cout << i << " ";
        }
    }
}