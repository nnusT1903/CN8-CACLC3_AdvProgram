#include<bits/stdc++.h>
using namespace std;

signed main(){
    char* a = new char[10];
    char* c =a+3;

    for (int i=0;i<9;i++) {
        a[i]='a';
    }
    a[9]='\0';
    cout<< "a: "<< "-"<< a<< "-"<< endl;
    cout<< "c: "<< "-"<< c<< "-"<< endl;

    delete c;

    cerr << "a after deleting c: "<< "-"<< a<< "-";
    //cannot output since the memory is deleted -> error.
    cout << endl;
    return 0;
}