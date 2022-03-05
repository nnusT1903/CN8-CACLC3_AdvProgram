#include<bits/stdc++.h>

using namespace std;
#define  maxn 505


void generateSquare(int n){
    int magicSquare[maxn][maxn];
    memset(magicSquare, 0, sizeof(magicSquare));
    int i = n / 2;
    int j = n - 1;

    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n){
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n){
                j = 0;
            }
            if (i < 0){
                i = n - 1;
            }
        }
        if (magicSquare[i][j]){
            j -= 2;
            i++;
            continue;
        }
        else{
            magicSquare[i][j] = num++;
        }
 
        j++;
        i--;
    }

    for (i = n-1; i >=0 ; i--) {
        for (j = n-1;j>=0;j--){
            cout << magicSquare[j][i] << " ";
        }
        cout << endl;
    }
}

signed main(){
    int n;
    cin >> n;
    generateSquare(n);
    return 0;
}