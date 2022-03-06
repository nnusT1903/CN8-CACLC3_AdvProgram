#include<bits/stdc++.h>
using namespace std;


#define maxn 400010
int n;
int a[maxn],b[maxn];

bool threat(int x, int y){
    if(a[x]==a[y]){
        return true;
    }
    if(b[x]==b[y]){
        return true;
    }
    if(a[x]+b[x]==a[y]+b[y]||a[x]-b[x]==a[y]-b[y]){
        return true;
    }
    return false;
}

signed main(){
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(threat(i,j)){
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
    return 0;
}