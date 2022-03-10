#include<bits/stdc++.h>
using namespace std;
 
void print_queen(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i]; j++) cout<<".";
        cout<<"*";
        for(int j = a[i]+1; j < n; j++) cout<<".";
        cout<<endl;
    }
    cout<<endl;
}
 
bool is_valid(int a[], int row, int col){
    for(int i = 0; i < row; i++){
        if(a[i] == col) return false;
        if(abs(i - row) == abs(a[i] - col)) return false;
    }
    return true;
}
 
void n_queen(int a[], int n, int row){
    if(row == n){
        print_queen(a, n);
    }else{
        for(int col = 0; col < n; col++){
            if(is_valid(a, row, col)){
                a[row] = col;
                n_queen(a, n, row+1);
            }
        }
    }
}
 
signed main(){
    int n;
    cin>>n;
    int a[100];
    memset(a, 0, sizeof(a));
    n_queen(a, n, 0);
    return 0;
}