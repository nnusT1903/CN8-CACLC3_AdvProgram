#include <bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 100005
//global variables

void generate(int n,int Int[]){
    iota(Int,Int+n,1);
    // for(int i=0;i<n;i++) cout << Int[i] << " ";
    return;
}

void permute(int sum, int n, int id, int v[], int Int[]){
    if(sum==0){
        for(int i=0;i<id;i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if(sum<0 || n<=0){
        return;
    }
    v[id] = Int[n-1];
    permute(sum-Int[n-1],n,id+1,v,Int);
    //decrease first value, continue to second largest value
    permute(sum,n-1,id,v,Int);
    return;
}

signed main(){ 
    int Int[maxn];
    int v[maxn];
    int n;
    cin >> n;
    generate(n,Int);
    permute(n,n,0,v,Int);
    return 0;
}