#include<bits/stdc++.h>
using namespace std;

#define int long long
#define maxn 1001
char a[maxn][maxn];
int m,n;


int dx[]={1,0,-1,0,1,-1,1,-1};
int dy[]={0,-1,0,1,1,-1,-1,1};

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

signed main(){
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='*'){
                 cout << "* ";
            }
            else{
                cout << cnt(i,j) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}