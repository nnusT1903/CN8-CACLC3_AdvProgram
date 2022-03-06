#include<bits/stdc++.h>

using namespace std;
#define maxn 100005

void findTriplets(int a[], int n, int sum){
    int i;
    sort(a, a + n);
    bool flag = false;
    for (i = 0; i < n - 2; i++) {
        if (i == 0 || a[i] > a[i - 1]) {
            int start = i + 1;
            int end = n - 1;
            int target = sum - a[i];
 
            while (start < end) {
                if (start > i + 1 && a[start] == a[start - 1]){
                    start++;
                    continue;
                }
                if (end < n - 1 && a[end] == a[end + 1]){
                    end--;
                    continue;
                }
                if (target == a[start] + a[end]){
                    cout << a[i] << " " << a[start] << " " << a[end] << endl;
                    flag = true;
                    start++;
                    end--;
                }
                else if (target > (a[start] + a[end])){
                    start++;
                }
                else {
                    end--;
                }
            }
        }
    }
}

signed main(){
//     freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
// 	freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);

    int n;
    int a[maxn];
    vector<vector<int>> v;

    cin >> n;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
 
    findTriplets(a, n, 0);
    return 0; 
}