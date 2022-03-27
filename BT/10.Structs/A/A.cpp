#include <bits/stdc++.h>
using namespace std;

struct Point {

    double x, y;

    Point(){
        x = 0;
        y = 0;
    };
    Point(double _x, double _y){
        x = _x;
        y = _y;
    };
    Point(const Point& p){
        x = p.x;
        y = p.y;
    }; 
    Point& operator=(const Point& p){
        x = p.x;
        y = p.y;
        return *this;
    };

    void Print(){
        cout << setprecision(2) << fixed << "(" << x << "," << y << ")" << endl;
    };

};

Point mid (const Point& a, const Point& b){
    Point mid;
    mid.x = (a.x + b.x)/2;
    mid.y = (a.y + b.y)/2;
    return mid;
};

void Print_A(Point p){
    cout << &p << endl;
}

void Print_B(Point& p){
    cout << &p << endl;
}

int main(){
    Point a (2,3);
    Point b (4,3);
    Point x (1,1);
    a.Print();
    b.Print();
    mid(a,b).Print();
    cout << &x << endl;
    Print_A(x);
    Print_B(x);
    return 0;
}