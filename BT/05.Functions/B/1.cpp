#include<bits/stdc++.h>

using namespace std;

bool a,b,c;

bool majority(bool a, bool b, bool c){
	// do something in here
	return (a & b) | (b & c) | (c & a);
}

signed main() {
    bool a = 1;
    bool b = 0;
    bool c = 0;
    if(majority(a,b,c)){
        cout << 1;
    }
    else cout << 0;
    return 0;
}