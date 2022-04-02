#include<bits/stdc++.h>
using namespace std;

signed main(){
    int temp=19032003;
    int* pd=&temp;

    cout<< temp<< endl;
    cout<< pd<< endl;
    //19032003
    //0x61fe14
    delete pd;

    cout<< temp<< endl;
    cout<< *pd<< endl;
    cout<< pd<< endl;
    // Local Variables has been deleted.
    // No output.
    return 0;
}
