#include<bits/stdc++.h>
using namespace std;

const int Distance = 70 ;
#define int long long

void chay(int& viTri, int (*buoc)()){
    viTri += (*buoc)();    
    if (viTri < 0) {
        viTri = 0;
    }    
    if (viTri > Distance) {
        viTri = 70;
    }
    return;
}

int buocRua(){
    int RuaVelocity[10] = {3,3,3,3,3,1,1,1,-6,-6};
    int temp = rand()%10;   
    return RuaVelocity[temp];
}

int buocTho(){
    int ThoVelocity[10] = {0,0,9,9,-12,1,1,1,-2,-2};
    int temp = rand()%10;   
    return ThoVelocity[temp];
}

void init(int *a, int *b){
    *a=0;
    *b=0;
    return;
}


signed main(){ 
    srand(time(NULL));      
    int Rua=1,Tho=2;
    init(&Rua,&Tho);
    while(Rua<Distance &&Tho<Distance){
        chay(Rua,buocRua);
        chay(Tho,buocTho);
        cout << "Rua: " << Rua << endl;
        cout << "Tho: " << Tho << endl;
    }
    if(Rua > Tho){
        cout << "Rua thang.";
    }
    else if(Rua < Tho){
        cout << "Tho thang.";
    }
    else cout << "Hoa.";
    // cout << Rua << " " << Tho;
    return 0;
} 