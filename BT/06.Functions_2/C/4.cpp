#include <bits/stdc++.h>
using namespace std;


#define int long long
#define maxn 1024 //can be more.


//global variables
char hMatrix[maxn][maxn];

void same(int n,int x,int y);

void contrary(int n,int x,int y){
    if(n==0){
        hMatrix[x][y]='.';
        return;
    }
    int m=n/2;
    contrary(m,x,y);
    contrary(m,x+m,y);
    contrary(m,x,y+m);
    same(m,x+m,y+m);
    return;
}

void same(int n,int x,int y){
    if(n==0){
        hMatrix[x][y]='X';
        return;
    }
    int m=n/2;
    same(m,x,y);
    same(m,x+m,y);
    same(m,x,y+m);
    contrary(m,x+m,y+m);
    return;
}

signed main(){
    int size;
    cin >> size;
    int sz = pow(2,size);
    same(sz,0,0);

    for(int i=0;i<sz;i++){
        for(int j=0;j<sz; j++){
            cout << hMatrix[i][j];
        }
        cout << endl;
    }
    return 0;
}