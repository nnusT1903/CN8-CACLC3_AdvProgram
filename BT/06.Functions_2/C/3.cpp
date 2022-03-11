#include <bits/stdc++.h>
using namespace std;

#define maxn 100005

//global variables:
int n,k;
char c[26];

void init(int n) {
    memset(c,'.',sizeof(c));
    iota(c,c+n,(char)97);
    // for(int i = 0; i < 26; i++ ){
    //     cout << c[i];
    // }
    return;
}


void permute(int n, int k, int index, char temp[], int i){
    if(index == k){
        for(int i=0;i<k;i++){
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }
    if(i>n-1) return;
    temp[index] = c[i];
    permute(n,k,index+1,temp, i+1);
    permute(n,k,index, temp, i+1);
}

void solve(int n,int k){
    char temp[31];
    permute(n, k, 0, temp, 0);
}


signed main(){
    freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
	freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);
    cin >> n >> k;
    init(n);
    solve(n,k);
    return 0;
}