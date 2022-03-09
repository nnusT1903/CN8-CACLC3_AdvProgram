#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define maxn 100005
#define fi first
#define se second

//global variables
int n;
vector<int> a;
int b[] = {0,25,50,75,100,125};

//overload function
int rnd(int x){
    // srand(time(NULL));
    int res = rand();
    return res%x;
}

vector<vector<int>> Two_Pointer_Search(int n, int arr[]){
    vector<vector<int>> res;
    for(int id=0;id<6;id++){
        for(int i=0; i<n; i++){
            int start = a[i],sum_of_2 = arr[id] - start;
            if(sum_of_2>=0){
                int l = i+1, r = n-1;
                while (l<r){
                    if(a[l]+a[r]>sum_of_2) r--;
                    else if(a[l]+a[r]<sum_of_2) l++;
                    else{ //push back and skip
                        res.push_back({start,a[l],a[r]});
                        while( l<n-1 && a[l]==a[l+1]) l++;
                        while( r>0 && a[r]==a[r-1]) r--;             
                        l++,r--;        
                    }
                }
            }
        }
    }
    return res;
}

void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        int x = rnd(50);
        a.push_back(x);
    }
}

void IOS(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return;
}

signed main(){
    IOS();
    srand(time(NULL));
    input();
    if(n<=2){
        return 0;
    }
    sort(a.begin(),a.end());
    vector<vector<int>> vect = Two_Pointer_Search(n,b);
    for(int i=0;i<vect.size();i++){
        cout << vect[i][0] << " " << vect[i][1] << " " << vect[i][2];
        cout << endl;
    }
    return 0;
}
