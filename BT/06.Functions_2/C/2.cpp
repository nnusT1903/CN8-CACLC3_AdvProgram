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

void swap(char* a, char* b) {
    if (*a == *b)
        return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void rev(string& s, int l, int r) {
    while (l < r) swap(&s[l++], &s[r--]);
}
  
int bsearch(string& s, int l, int r, int key){
    int index = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (s[mid] <= key) r = mid - 1;
        else {
            l = mid + 1;
            if (index == -1 || s[index] >= s[mid])
                index = mid;
        }
    }
    return index;
}


  
bool nextPermutation(string& s) {
    int len = s.length(), i = len - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        --i;
    if (i < 0)
        return false;
    else {
        int index = bsearch(s, i + 1, len - 1, s[i]);
        swap(&s[i], &s[index]);
        rev(s, i + 1, len - 1);
        return true;
    }
}

void shuffle(char c[],int k){
    string temp = "";
    for(int i=0;i<k;i++){
        temp+=c[i];
    }
    do{
        cout << temp << endl;
    } while ( nextPermutation(temp) );
    return;
}



void permute(int n, int k, int index, char temp[], char c[], int i){
    if(index == k){
        shuffle(temp,k);
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