#include <bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 100005

//global variables
int n;
int p[maxn];
int pin[maxn];
int dir[maxn];

void init(int n){
    for (int i = 1; i <= n; i++) {
        dir[i] = -1;
        p[i]  = i;
        pin[i] = i;
    }
    return;
}

void move(int x, int y){
    int z = p[pin[x]+y];
    p[pin[x]] = z;
    p[pin[x]+y] = x;
    pin[z] = pin[x];
    pin[x] += y;
    return;
}

void print(){
    for(int i=1;i<=n;i++){
        cout << p[i];
    }
    return;
}

void permute(int x){
    if(x>n){
        print();
        cout << endl;
    }
    else{
        permute(x+1);
        for(int i=1;i<x;i++){
            move(x,dir[x]);
            permute(x+1);
        }
        dir[x]*=-1;
    }
    return;
}


signed main(){
    cin >> n;
    init(n);
    permute(1);
    return 0;
}