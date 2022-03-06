#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int 	long long
#define maxn 	100005
#define inf		INT_MAX

signed main(){
	int k;
	cin >> k;
	while(k--){
		int n;
		int a[maxn];
		int sum =0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		int id = 0;
		int lsum = 0;
		bool flag = false;
		for(int i=1;i<n;i++){

			lsum+=a[i-1];
			if(lsum*2 == sum-a[i]){
				flag = true;
				break;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}




