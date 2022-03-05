#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> v;
int x;

signed main(){
    while(cin>>x){
        v.push_back(x);
    }
    cout << setprecision(2) << fixed;
    
    long double avg=0;
    long double res=0;
    
    for(int i=0;i<v.size();i++){
        avg+=v[i];
    }
    int n = v.size();
    
    avg = (ld)(avg)/(ld)(n);
    cout << avg << endl;
    
    for(int i=0;i<n;i++){
        res+=(v[i]-avg)*(v[i]-avg);
    }
    res/=n;
    cout << res;
    return 0;
}