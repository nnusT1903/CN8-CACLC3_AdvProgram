#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    string subs,s;
    getline(cin,s);
    getline(cin,subs);
    int cnt =0;
    int index = s.find(subs,0);
    while(index!=string::npos){
        cnt++;
        index = s.find(subs,index+1);
    }
    cout << cnt;
    return 0;
}