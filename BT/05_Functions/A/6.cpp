#include<bits/stdc++.h>
using namespace std;

int NormalBinarySearch(int a[],int low,int high,int key){
    
    while (low<=high){
        int mid=low+(high-low)/2;
        if (a[mid]==key) return mid;
        else if (a[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int BinarySearchUseRecursive(int a[],int low,int high, int key){
    if (low>high) return -1;
    int mid=low+(high-low)/2;
    if (a[mid]==key) return mid;
    else if (a[mid]>key) return BinarySearchUseRecursive(a,low,mid-1,key);
    else return BinarySearchUseRecursive(a,mid+1,high,key);
}

signed main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    // cout<<  NormalBinarySearch(a,0,9,6)<< endl;
    cout<< BinarySearchUseRecursive(a,0,9,5)<< endl;

    return 0;

}