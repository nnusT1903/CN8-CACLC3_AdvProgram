#include<bits/stdc++.h>
using namespace std;

typedef long double ld;

#define int long long
#define maxn 100005
#define fi first
#define se second

struct sv{
    ld toan;
    ld ly;
    ld anh;

    void print(){
        cout << toan << " " << ly << " " << anh;
    }

    ld avg(){
        ld res;
        res = (ld)(toan + ly + anh)/3.0;
        return res;
    }
};
sv arr[maxn];

bool toan_comp(pair<int,sv> a, pair<int,sv> b){
    return (a.se.toan > b.se.toan);
}

bool ly_comp(pair<int,sv> a, pair<int,sv> b){
    return (a.se.ly > b.se.ly);
}

bool anh_comp(pair<int,sv> a, pair<int,sv> b){
    return (a.se.anh > b.se.anh);
}

bool avg_comp(pair<int,sv> a, pair<int,sv> b){
    return (a.se.avg() > b.se.avg());
}

bool flag(ld x, ld y, ld z){
    if((0<=x)&&(x<=10)&&(0<=y)&&(y<=10)&&(0<=z)&&(z<=10)) return true;
    return false;
}

vector<pair<int,sv>> v;

signed main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        ld x,y,z;
        cin >> x >> y >> z;
        if(!flag(x,y,z)){
            cout << "invalid";
            return 0;
        }
        arr[i].toan=x;
        arr[i].ly=y;
        arr[i].anh=z;
        pair<int,sv> temp = make_pair(i+1,arr[i]);
        v.push_back(temp);
    }
    cout<< setprecision(1)<< fixed;
    //output:
    cout << "Theo diem mon Toan:" << endl;
    cout << "SV Toan Ly Anh" << endl;
    sort(v.begin(),v.end(),toan_comp);
    for(int i=0;i<v.size();i++){
        cout << v[i].fi << " " ;
        v[i].se.print();
        cout << endl;
    }
    cout << endl;
    //output:
    cout << "Theo diem mon Anh:" << endl;
    cout << "SV Toan Ly Anh" << endl;
    sort(v.begin(),v.end(),anh_comp);
    for(int i=0;i<v.size();i++){
        cout << v[i].fi << " " ;
        v[i].se.print();
        cout << endl;
    }
    cout << endl;
    //output:
    cout << "Theo diem trung binh:" << endl;
    cout << "SV TB Toan Ly Anh" << endl;
    sort(v.begin(),v.end(),avg_comp);
    for(int i=0;i<v.size();i++){
        cout << v[i].fi << " " << v[i].se.avg() << " ";
        v[i].se.print();
        cout << endl;
    }
    cout << endl;
}

