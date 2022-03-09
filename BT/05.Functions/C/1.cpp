#include<bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 1001
char a[maxn][maxn];
bool masked[maxn][maxn];
int m,n,k;

/**
 * @brief   Initialize surrounding coordinates
 * @param   dx       x-coordinates
 * @param   dy       y-coordinates
 */
int dx[]={1,0,-1,0,1,-1,1,-1};
int dy[]={0,-1,0,1,1,-1,-1,1};

/**
 * @brief   Count the number of surrounding mines.
 * @param   idx     x-coordinate
 * @param   idy     y-coordinate
 * @return  cnt     result
 */
int cnt(int idx, int idy){
    int res = 0;
    for(int i=0;i<8;i++){
        int x = idx + dx[i];
        int y = idy + dy[i];
        if(x>=0 && x<m && y>=0 && y<n){
            if(a[x][y]=='*'){
                res++;
            }
        }
    }
    return res;
}

/**
 * @brief   Construct a new init object.
 * @object  Mine board.
 * @param   m   number of rows.
 * @param   n   number of columns.
 */
void init(int m, int n, int k){
    srand(time(NULL));
    memset(a, '.', sizeof(a));
    memset(masked, 1, sizeof(masked));
    for(int i=0;i<k;i++){
        int x = rand() % m;
        int y = rand() % n;
        a[x][y] = '*';
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!='*'){
                a[i][j] = char(cnt(i,j)+48);
            }
        }
    }
    return;
}

/**
 * @brief Print all of the board
 * @param   m   number of rows.
 * @param   n   number of columns.
 */
void printAll(int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return;
}

/**
 * @brief Check if input coordinates are valid
 * @param x     coordinate 
 * @param y     coordinate
 * @return true     if given coordinates are inside the board
 * @return false    otherwise
 */
bool valid(int x, int y, int m, int n){
    if(0>x||0>y) return false;
    if(x>=m||y>=n) return false;
    return true;
}

/**
 * @brief Check if input coordinates have a mine
 * @param x     coordinate 
 * @param y     coordinate
 * @return true     if given coordinates has a mine
 * @return false    otherwise
 */
bool checkMine(int x, int y){
    if(a[x][y]=='*'){
        return true;
    }
    return false;
}

void printCurrent(int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!masked[i][j]){
                cout << a[i][j];
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
}

/**
 * @brief   Main function
 * @return  signed 
 */
signed main(){
    cin >> m >> n >> k;         //Input.
    init(m,n,k);
    // printAll(m,n);
    printCurrent(m,n);
    int move = m*n-k;
    while(move>0){
        move--;
        int x,y;
        cin >> x >> y;
        if(!valid(x,y,m,n)){
            cout << "Invalid." << endl;
            move++;
        }
        if(checkMine(x,y)){
            cout << "YOU'RE DEAD!";
            cout << endl;
            printAll(m,n);
            return 0;
        }
        masked[x][y]=false;
        printCurrent(m,n);
        cout << endl;
    }
    if(move==0){
        cout << "Congratulations! You've clear the mine field." << endl;
        printAll(m,n);
    }
    return 0;
}