#include <bits/stdc++.h>
using namespace std;

#define maxn 100005

//global variables:

void init(int n, char c[]) {
    // memset(c,'.',sizeof(c));
    iota(c,c+n,(char)97);
    // for(int i = 0; i < 26; i++ ){
    //     cout << c[i];
    // }
    return;
}


void permute(int n, int k, int index, char temp[], char c[], int i){
    if(index == k){
        for(int i=0;i<k;i++){
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }
    if(i>n-1) return;
    temp[index] = c[i];
    permute(n,k,index+1,temp, c, i+1);
    permute(n,k,index, temp, c, i+1);
}

void solve(int n,int k, char c[]){
    char temp[31];
    permute(n, k, 0, temp, c, 0);
}


signed main(){
    // freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
	// freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);
    int n,k;
    char c[26];
    cin >> n >> k;
    init(n,c);
    solve(n,k,c);
    return 0;
}