#include<bits/stdc++.h>
using namespace std;

#define int long long 

//overload function
int rand(int x){
    int res = rand();
    return res%x;
}

signed main(){
    srand(time(NULL));
    int n;
    cin >> n;
    cout << rand(n);
    return 0;
}