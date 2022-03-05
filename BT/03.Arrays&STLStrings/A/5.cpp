#include<bits/stdc++.h>
using namespace std;

const int quantity=30;
signed main(){
    srand(time(0));
    int a[quantity];
    for (int i=0;i<quantity;i++) a[i]=rand()%100;
    for (int i=0;i<quantity;i++) cout<< a[i]<< " ";
    cout<< endl;
    //bubble sort
    bool check;
    for (int i=quantity-1;i>0;i--){
        check=false; //flag for optimization
        for (int j=1;j<=i;j++){
            if (a[j-1]>a[j]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                check=true;
            }
        }
        if (!check) break; //optimization
    }
    for (int i=0;i<quantity;i++) cout<< a[i]<< " ";

}