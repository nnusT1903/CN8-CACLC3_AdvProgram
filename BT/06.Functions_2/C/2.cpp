#include <bits/stdc++.h>
using namespace std;

#define maxn 100005

//global variables:
int n,k;

void permute(string a, int l, int r){
    if (l == r) {
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else{
        for (int i = l; i <= r; i++){
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

void solve(char arr[], char data[], int start, int end, int index, int r){
    if (index == r){
        string temp = "";
        for (int j = 0; j < r; j++){
            // cout << data[j] << " ";
            temp+=data[j];
        }
        permute(temp,0,temp.size()-1);
        // cout << endl;
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++){
        data[index] = arr[i];
        solve(arr, data, i+1, end, index+1, r);
    }
}

void print(char arr[], int n, int r){
    char data[maxn*10];
    solve(arr, data, 0, n-1, 0, r);
}

signed main(){
    cin >> n >> k;
    vector<char> vc;
    for(int i=0;i<n;i++){
        vc.push_back(tolower((char)(i+65)));
    }

    char arr[maxn*10];
    for(int i=0;i<vc.size();i++){
        arr[i] = vc[i];
    }
    print(arr,n,k);
    return 0;
}