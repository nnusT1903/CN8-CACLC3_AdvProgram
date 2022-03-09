#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define maxn 100005
#define fi first
#define se second

int n[maxn],k[maxn];

int toHop(int n, int k){
    if(k==0||k==n){
        return 1;
    }
    if(k==1){
        return n;
    }
    return toHop(n-1,k-1)+toHop(n-1,k);
}

int kiemTra(int k, int n){
    if(0<=k&&k<=n&&1<=n&&n<=20) return 1;
    return 0;
}

void nhapKN(int k[], int n[], int *soPhanTu){
    int i=0;
    do {
        i++;
        cin >> k[i] >> n[i];
    } while (k[i]!=-1 && n[i]!=-1);
    *soPhanTu=i-1;
    return;
}


signed main(){
    int soPhanTu;
    nhapKN(k, n, &soPhanTu);
    for (int i=1; i<=soPhanTu; i++) {
        if (kiemTra(k[i], n[i])==1) {
            cout <<  toHop(k[i], n[i]) << endl;
        }
    }
    return 0;
}
