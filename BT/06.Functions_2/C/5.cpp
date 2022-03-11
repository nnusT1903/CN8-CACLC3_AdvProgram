#include <bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 100005
//global variables
int Int[maxn*8];
vector<int> v;
vector<vector<int>> res;

void generate(int n){
    iota(Int,Int+n,1);
    // for(int i=0;i<n;i++) cout << Int[i] << " ";
    return;
}

void permute(int sum, int n){
    if(sum==0){
        res.push_back(v);
        return;
    }
    if(sum<0 || n<=0){
        return;
    }
    v.push_back(Int[n-1]);
    permute(sum-Int[n-1],n);
    //decrease first value, continue to second largest value
    v.pop_back();
    permute(sum,n-1);
    return;
}

signed main(){
    int n;
    cin >> n;
    generate(n);
    permute(n,n);
    for(int i=0;i<res.size();i++){
        for(auto j:res[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}