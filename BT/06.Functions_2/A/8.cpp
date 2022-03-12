#include<bits/stdc++.h>
using namespace std;

#define maxn 100005
#define int long long

//global variables
int n;
vector<int> a;
vector<vector<int>> res;
vector<int> temp;

void init(int n){
    for(int i=0;i<n;i++){
        a.push_back(i+1);
    }
    return;
}

void print(){
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void backtrack(int x){
    res.push_back(temp);
    for (int i = x; i < n; i++) {
        temp.push_back(a[i]);
        backtrack(i + 1);
        temp.pop_back();
    }
 
    return;
}

signed main(){
    cin >> n;
    init(n);
    
    backtrack(0);
    print();
    return 0;
}