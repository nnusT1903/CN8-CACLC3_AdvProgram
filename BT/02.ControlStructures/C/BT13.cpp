#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

bool check(int x){
    return (int)sqrt(x)*(int)sqrt(x)==x;
}

bool prime(int x){
    if(x<2){
        return false;
    }
    for(int i=2; i*i <=x ;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

bool perf(int x){
    int res =1;
    for(int i=2; i*i<=x ;i++){
        if(x%i==0){
            if(i*i==x){
                res+=i;
            }
            else{
                res+=i;
                res+=x/i;
            }
        }
    }
    if(res==x && x!=1){
        return true;
    }
    return false;

}

signed main(){
    int n;
    cin >> n;
    cout << "Prime Numbers are: ";
    for(int i=2;i<=n;i++){
        if(prime(i)) cout << i << " ";
    }
    cout << endl;
    cout << "Perfect Numbers are: ";
    for(int i=2;i<=n;i++){
        if(perf(i)) cout << i << " ";
    }
    cout << endl;
    cout << "Square Numbers are: ";
    for(int i=2;i<=n;i++){
        if(check(i)) cout << i << " ";
    }
    return 0;
}