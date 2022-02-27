#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long


signed main(){
    while (1){
        cout<< "Nhap vao mot chu so trong khoang 0..9: ";
        int n;
        cin>> n;
        if (n>9 || n<0) break;
        else{
            cout<< "Vua nhap chu so ";
            switch(n){
            case 0:
                cout<< "khong"<< endl;
                break;
            case 1:
                cout<< "mot"<< endl;
                break;
            case 2:
                cout<< "hai"<< endl;
                break;
            case 3:
                cout<< "ba"<< endl;
                break;
            case 4:
                cout<< "bon"<< endl;
                break;
            case 5:
                cout<< "nam"<< endl;
                break;
            case 6:
                cout<< "sau"<< endl;
                break;
            case 7:
                cout<< "bay"<< endl;
                break;
            case 8:
                cout<< "tam"<< endl;
                break;
            case 9:
                cout<< "chin"<< endl;
                break;
            }
        }

    }
    return 0;

}
