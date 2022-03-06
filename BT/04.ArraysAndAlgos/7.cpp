#include<bits/stdc++.h>
using namespace std;

vector<string> v;

signed main(){
// 	freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
// 	freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);
    string s;
    cin >> s;
    int sz = s.size();
    if(sz<2){
        return 0;
    }
    int final_size = pow(sz,3)+pow(sz,2);
    for(int i=0; i<sz; i++){
        for(int j=0; j<sz; j++){
            string str = "";
            str = s[i]+str;
            str = str+s[j];
            v.push_back(str);
            for(int k=0; k<sz; k++){
                string temp = str+s[k];
                v.push_back(temp);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}