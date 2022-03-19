#include<iostream>
using namespace std;

int count_even(int *p, int size){
    int cnt=0;
    for(int i=0;i<size;i++){
        if(p[i]%2==0) cnt++;
    }
    return cnt;
}

signed main(){
    int size;
    cin>>size;
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i;
    }
    cout<<count_even(p,size);
    return 0;
}