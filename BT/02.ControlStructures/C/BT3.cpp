#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
#define int long long

bool check(ld x, ld y, ld z){
    return (x+y>z&&y+z>x&&z+x>y);
}

signed main(){
    ld x,y,z;
    cin >> x >> y >> z;
    if(!check(x,y,z)){
        cout << "Not a triangle.";
    }
    else{
        cout << "Perimeter: " << x+y+z<<endl;
        if(x==y&&y==z){
            cout << "Equilateral triangle." << endl;
        }
        else{
            if(x==y||y==z||z==x){
                if(hypot(x,y)==z||hypot(y,z)==x||hypot(z,x)==y){
                    cout << "Isosceles right triangle.";
                }
                else{
                    cout << "Isosceles triangle.";
                }
            }
            else{
                if(hypot(x,y)==z||hypot(y,z)==x||hypot(z,x)==y){
                    cout << "Right triangle.";
                }
                else{
                    cout << "Triangle.";
                }
            }
        }
    }
    return 0;
}