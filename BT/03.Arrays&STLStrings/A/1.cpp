#include<iostream>

using namespace std;
int a1[100];
int b1[100]={1,2,3,4};
int c1[]={1,2,3,4};
int main(){
    int a2[100];
    int b2[100]={1,2,3,4};
    int c2[]={1,2,3,4};
    for (int i=0;i<100;i++) cout<< a1[i]<< " ";
    cout<< endl;
    for (int i=0;i<100;i++) cout<< a2[i]<< " ";
    cout<< endl;
    for (int i=0;i<100;i++) cout<< b1[i]<< " ";
    cout<< endl;
    for (int i=0;i<100;i++) cout<< b2[i]<< " ";
    cout<< endl;
    for (int i=0;i<4;i++) cout<< c1[i]<< " ";
    cout<< endl;
    for (int i=0;i<4;i++) cout<< c2[i]<< " ";
    cout<< endl;
    for (int i=0;i<5;i++) cout<< c1[i]<< " ";
    cout<< endl;
    for (int i=0;i<5;i++) cout<< c2[i]<< " ";
    cout<< endl;
}