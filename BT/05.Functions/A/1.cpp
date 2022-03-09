#include<bits/stdc++.h>

using namespace std;

signed main(){
    int a[3];
    char b[3];
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<3;i++){
        cout<<(void*)&a[i]<<" ";
    }
    // Dia chi cua cac phan tu lien tiep mang kieu int cach nhau 4 bytes (hexadecimal)
    for(int i=0;i<3;i++){
        cout<<(void*)&b[i]<<" ";
    }
    // Dia chi cua cac phan tu lien tiep mang kieu char cach nhau 1 byte (hexadecimal)
    return 0;
}