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
int a1,b1,c1,a2,b2,c2;

void IO(){
	freopen(AWP".INP","r",stdin);
	freopen(AWP".OUT","w",stdout);
}

void IOS(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

signed main(){
//	IO();
	IOS();
//	ll q;
//	cin >> q;
//	for(int az=0;az<q;az++){
// 		input();
// 		solve();
// 		output();
//	}
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
    ld m = a1 * b2 - b1 * a2;
    ld n = b2 * c1 - c2 * b1;
    ld p = c2 * a1 - a2 * c1;
    if (m) 
        cout << (ld)(n / m) << " " << (ld)(p / m);
    else if(n == 0 || p == 0)
        printf("Vo so nghiem");
    else
        printf("Vo nghiem");
	return 0;
}