#include<bits/stdc++.h>

using namespace std;

#define maxn 100005

bool comp(pair<int, int>a, pair<int, int>b){
    return a.first<b.first;
}

signed main(){
//     freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
// 	freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);

    int n;
    int a[maxn];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<pair<int,int>> v;

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]+a[j]==0){
                int first = min(a[i],a[j]);
                int second = max(a[j],a[i]);
                v.push_back(make_pair(first,second));
            }
        }
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}