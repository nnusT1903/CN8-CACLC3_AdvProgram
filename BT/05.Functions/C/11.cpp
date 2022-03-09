#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define maxn 100005
#define fi first
#define se second

signed main(){
    int n;
    cin >> n;
    string s = bitset<64>(n).to_string();
    while(s[0]=='0'){
        s.erase(0,1);
    }
    cout << s << endl;
    return 0;
}