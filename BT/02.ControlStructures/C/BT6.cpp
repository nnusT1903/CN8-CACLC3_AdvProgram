#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

signed main(){
    int numer,denom;
    cin >> numer >> denom;
    cout << numer/gcd(numer,denom) << "/" << denom/gcd(numer,denom) << endl;
    return 0;
}