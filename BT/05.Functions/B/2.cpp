#include<bits/stdc++.h>

using namespace std;

int a[100005],b[100005];

bool eq(int a[], int b[], int n) {
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) {
            return false;
        }
    }
    return true;
}

signed main() {
    int a[] = {0,1,2,3,4,5,6,7};
    int b[] = {1,2,3,4,5,6};
    int n = min(sizeof(a),sizeof(b));
    if(eq(a,b,n)){
        cout << "true" << endl;
    }
    else cout << "false" << endl;
    return 0;
}