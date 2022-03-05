#include <bits/stdc++.h>
#define maxn 10004

using namespace std;
double money(double soluong, double giathanh){
    return soluong*giathanh;
}
bool ans(double mon,double soluong[],double price[],int n ){
    double tong=0;
    for(int i=0;i<n;i++){
        tong+=money(soluong[i],price[i]);
    }
    if(tong<=mon) return true;
    return false;
}
void th1(int n,double mon,double price[],double soluong[],string name[],bool a[]){
    vector<double> gia;
    vector<string> ans;
    
    for(int i=0;i<n;i++){
        if(a[i]==true){
            mon-=money(soluong[i],price[i]);
            ans.push_back(name[i]);
        }else{
            gia.push_back(price[i]);
        }
    }
    sort(gia.begin(),gia.end(),greater<double>());
    while(mon>0){
        for(int i=0;i<n;i++){
            if(price[i]==gia[gia.size()-1]){
                mon-=money(soluong[i],price[i]);
                ans.push_back(name[i]);
                gia.pop_back();
            }
        }
    }
    
    if(mon==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }else{
        ans.pop_back();
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}
void th2(int n,double mon,double price[],double soluong[],string name[],bool a[]){
    vector<double> gia;
    vector<string> ans;
    
    for(int i=0;i<n;i++){
        if(a[i]==true){
            mon-=money(soluong[i],price[i]);
            ans.push_back(name[i]);
        }else{
            gia.push_back(money(soluong[i],price[i]));
        }
    }
    sort(gia.begin(),gia.end(),greater<double>());
    while(mon>0){
        for(int i=0;i<n;i++){
            if(money(soluong[i],price[i])==gia[gia.size()-1]){
                mon-=gia[i];
                ans.push_back(name[i]);
                gia.pop_back();
            }
        }
    }
    
    if(mon==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }else{
        ans.pop_back();
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}

int main()
{
    double money;cin>>money;
    int n;cin>>n;
    double price[maxn];
    string ten[maxn];
    double soluong[maxn];
    bool import[maxn];
    for(int i=0;i<n;i++){
        cin>>price[i]>>ten[i]>>soluong[i]>>import[i];
    }
    if(ans(money,soluong,price,n)){
        cout<<"du tien";
    }else{
        th1(n,money,price,soluong,ten,import);
        th2(n,money,price,soluong,ten,import);
    }
    return 0;
}