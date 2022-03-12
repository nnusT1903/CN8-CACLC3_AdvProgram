#include<bits/stdc++.h>
using namespace std;

string s;
void permutation(string& s,int low,int high){
    //base case:
    if(low==high){
        cout<<s<<endl;
        return;
    }
    for(int i=low;i<high;i++){
        swap(s[low],s[i]);
        permutation(s,low+1,high);
        swap(s[low],s[i]);
    }
    return;
}

signed main(){
    cin >> s;
    // do{
    //     cout << s << endl;
    // } while(next_permutation(s.begin(), s.end()));
    permutation(s,0,s.size());
    return 0;
}