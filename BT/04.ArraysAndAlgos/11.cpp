#include<bits/stdc++.h>

using namespace std;
#define maxn 100005

signed main(){
    int n;
    string s;
    vector<string> v;
    //input:
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.size()%2!=0){
            v.push_back(s);
        }
    }

    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1;j<v.size(); j++){
            string temp = v[j];
            reverse(temp.begin(), temp.end());
            if(v[i] == temp){
                cout << temp.size() << " " << temp[(temp.size()-1)/2];
            }
        }
    }

    return 0; 
}