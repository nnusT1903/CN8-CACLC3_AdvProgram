#include<bits/stdc++.h>

using namespace std;
#define N 100005

signed main(){
    int a[N];
    int b[N];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n+1;i++){
        cin >> b[i];
    }

    sort(a,a+n);
    sort(b,b+n+1);

    int id = 0;
    bool found = false;
    while(id<n){
        if(a[id]!=b[id]){
            cout << b[id];
            return 0;
        }
        id++;
    }
    if(!found){
        cout << b[n];
    }
    return 0; 
}