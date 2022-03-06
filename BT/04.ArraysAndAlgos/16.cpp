/**
 * @file    16.cpp
 * @author  TsunN
 * @brief   Naive Attempt for "Tandem Repeats" without using Hash or Suffix Tree (50/100)
 * @version 0.1
 * @date    2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;
int l[100005];
int r[100005];

signed main(){
//     freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
//     freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);
    cin >> n >> m;
    cin >> s;
    for(int i=0;i<m;i++){
        cin >> l[i] >> r[i];
    }
    for(int i=0;i<m;i++){
        string str= "";
        for(int j=l[i]-1;j<r[i];j++){
            str+=s[j];
        }
        int cnt = 1;
        int sz = r[i]-l[i]+1;
        string ss = s;
        ss.erase(0,r[i]);
        int idx;
        while(ss.find(str)!=string::npos&&ss.size()>0){
            idx = ss.find(str);
            if(idx){
                break;
            }
            else{
                ss.erase(0,sz);
                cnt++;
            }
        }
        // cout << idx << endl;
        cout << cnt << endl;
    }
    return 0;
}

/*          0123456789
    ab      abcabcccacccc
    aba     bcabcccacccc
    ba      bcabcccacccc
    abc     abcccacccc
    c       ccacccc
*/
