#include<bits/stdc++.h>
using namespace std;

void print(int m, int n){
    for(int i=0; i<m;i++){
        cout << " ";
    }
    for(int i=0; i<2*(n-1)+1;i++){
        cout << "*";
    }
    cout << endl;
    return;
}

signed main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        print(n-i-1,i+1);
    }
    return 0;
}