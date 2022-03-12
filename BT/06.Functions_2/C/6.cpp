#include <bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 80008

//global variable

void init(int n,int p[],int pin[], int dir[]){
    for (int i = 1; i <= n; i++) {
        dir[i] = -1;
        p[i]  = i;
        pin[i] = i;
    }
    return;
}

void move(int x, int y, int p[], int pin[]){
    int z = p[pin[x]+y];
    p[pin[x]] = z;
    p[pin[x]+y] = x;
    pin[z] = pin[x];
    pin[x] += y;
    return;
}

void permute(int x, int n, int p[], int pin[], int dir[]){
    if(x>n){
        for(int i=1;i<=n;i++){
            cout << p[i];
        }
        cout << endl;
    }
    else{
        permute(x+1,n,p,pin,dir);
        for(int i=1;i<x;i++){
            move(x,dir[x],p,pin);
            permute(x+1,n,p,pin,dir);
        }
        dir[x]*=-1;
    }
    return;
}


signed main(){
    int n;
    int p[maxn];
    int pin[maxn];
    int dir[maxn];
    cin >> n;
    init(n,p,pin,dir);
    permute(1,n,p,pin,dir);
    return 0;
}