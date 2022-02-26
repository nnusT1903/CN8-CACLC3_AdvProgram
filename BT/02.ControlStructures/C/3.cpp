#include<bits/stdc++.h>

using namespace std;

#define int long long
signed main(){
    int n;
    cin>> n;
    for (int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout << " ";
        }
        for(int j=2*i+1;j>0;j--){
            cout << "*";
        }
        for(int j=n-i-1;j>0;j--){
            cout << " ";
        }
        cout<< endl;
    }
}