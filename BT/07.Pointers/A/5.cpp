#include<bits/stdc++.h>
using namespace std;

char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main(){
    cout << weird_string();
    return 0;
}
//warning: address of local variable 'c' returned
//truy nhập vào vùng bộ nhớ stack đã bị thu hồi