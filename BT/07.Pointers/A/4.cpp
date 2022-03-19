#include<bits/stdc++.h>
using namespace std;

#define int long long

int binarysearch(int* arr, int* low, int* high, int x){  
    int index=-1;
    if (*low>*high) return index;  
    if (low>high) return index;  

    int* mid=low+(high-low)/2;
    if (*mid==x) return mid-arr;  
    if (x<*mid)  {
        return binarysearch(arr,low,mid-1,x);
    }
    else if (x>*mid)  {
        return binarysearch(arr,mid+1,high,x);
    }
    return index;  
}  

signed main(){
    int n;
    int a[100005];
    int x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;

    sort(a,a+n);
    int ans = binarysearch(a,a+0,a+n-1,x);
    if(ans == -1){
        cout << "Not found.";
    }
    else{
        cout << ans;
    }
    return 0;
}