#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int 	long long
#define fi 		first
#define se  	second
#define mod 	1e9+7
#define maxn    100005
#define AWP     "_____"
#define base 	31
#define pii     pair<int,int>
#define pi      3.141592654
#define inf     INT_MAX
#define pb      push_back

/*Extensions:
	~Print a binary representation of a number n:
		bitset<x>(n);
		(x:number of bits to show)
	~Find minimum of a number of elements:
		int minn = min({a, b, c, d});
	~Swap 2 values a and b:
		a^=b; 	b^=a;	a^=b;
	~consider changing push_back() to emplace_back()
*/

//declaration here:
int a[101][101];
int n,m;
int store[100005];
bool visited[101][101];
int ans[101][101];
int sz=0;
int top,bottom,l,r,id;

void IO(){
	freopen(AWP".INP","r",stdin);
	freopen(AWP".OUT","w",stdout);
}

void IOS(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void input(){
	cin >> n >> m;
	int cnt =1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]=cnt;
			cnt++;
			store[sz]=a[i][j];
			sz++;
			visited[i][j]=0;
		}
	}
	return;
}

void solve(){
	sort(store,store+sz);
	top = 0;
    bottom = n - 1,
    l = 0,
    r = m - 1;
    id = 0;
 
    while (1) {
 
        if (l > r){
        	break;
		}
        for (int i = l; i <= r; i++){
        	ans[top][i] = store[id];
        	id++;
		}
            
        top++;
 
        if (top > bottom) break;

        for (int i = top; i <= bottom; i++){
        	ans[i][r] = store[id];
        	id++;
		}
        r--;
 
        if (l > r) break;
 
        for (int i = r; i >= l; i--){
        	ans[bottom][i] = store[id];
        	id++;
		}
        bottom--;
 
        if (top > bottom) break;
 
        for (int i = bottom; i >= top; i--){
        	ans[i][l] = store[id];
        	id++;
		}
        l++;
    }
	return;
}

void output(){
//	for(int i=0;i<sz;i++){
//		cout << store[i] << " ";
//	}
	
//	cout << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

signed main(){
//	IO();
	IOS();
//	ll q;
//	cin >> q;
//	for(int az=0;az<q;az++){
		input();
		solve();
		output();
//	}
	return 0;
}