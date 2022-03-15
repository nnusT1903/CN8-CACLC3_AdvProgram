#include<bits/stdc++.h>
using namespace std;

const int MaxScore = 100 ;
#define int long long

void addPoints(int& Player, int x){
    Player += x;    
    if (Player < 0) {
        Player = 0;
    }    
    if (Player > MaxScore) {
        Player = MaxScore;
    }
    return;
}

int Points(){
    int RollDice[6] = {1,2,3,4,5,6};
    int temp = rand()%6;   
    return RollDice[temp];
}

void init(int *a, int *b){
    *a=0;
    *b=0;
    return;
}

void addPts1(int *P1, int *P2){
    int pts1 = Points();
    cout << "xuc xac nguoi choi 1: " << pts1;
    addPoints(*P1,pts1);
    cout << "   Tong nguoi 1: " << *P1 << endl;

    int pts2 = Points();
    cout << "xuc xac nguoi choi 2: " << pts2;
    addPoints(*P2,pts2);
    cout << "   Tong nguoi 2: " << *P2 << endl;
}

void addPts2(int *P1,int *P2){
    int pts2 = Points();
    cout << "xuc xac nguoi choi 2: " << pts2;
    addPoints(*P2,pts2);
    cout << "   Tong nguoi 2: " << *P2 << endl;

    int pts1 = Points();
    cout << "xuc xac nguoi choi 1: " << pts1;
    addPoints(*P1,pts1);
    cout << "   Tong nguoi 1: " << *P1 << endl;
}

signed main(){ 
    srand(time(NULL));      
    int P1,P2;
    init(&P1,&P2);
    while(P1<MaxScore &&P2<MaxScore){
        if(P1<=P2)
            addPts1(&P1,&P2);
        else
            addPts2(&P1,&P2);
    }
    if(P1 > P2) 
        cout << "Player 1 wins.";
    else if(P1 < P2) 
        cout << "Player 2 wins.";
    else cout << "Tied.";
    return 0;
} 