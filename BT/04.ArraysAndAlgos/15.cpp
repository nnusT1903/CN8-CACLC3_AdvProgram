#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int 			long long
#define fi 				first
#define se  			second
#define mod 			1000000007
#define maxn    		1000
#define AWP     		"_____"
#define base 			31
#define pii     		pair<int,int>
#define pi     			3.141592654
#define inf     		INT_MAX
#define pb      		push_back
#define all(x)  		x.begin(),x.end()
#define lbnd    		lower_bound
#define ubnd    		upper_bound
#define sz(x)   		(ll)x.size()
#define sum(x)  		accumulate(x.begin(),x.end(),0ll)
#define each(ele,pool) 	for(auto&& ele:pool)
#define outfi(x,bfer)	fixed << setprecision(bfer) << (x)

/*Extensions:
	~Find minimum of a number of elements:
		int minn = min({a, b, c, d});
	~Swap 2 values a and b:
		a^=b; 	b^=a;	a^=b;
	~Modular exponentiation:
		int power(int x, int y, int p){
			int res = 1;
			x = x % p; 
			if (x == 0) return 0; 
			while (y > 0){
				if (y & 1){
					res = (res*x) % p;
				}
				y = y>>1; 
				x = (x*x) % p;
			}
			return res;
		}
*/

//declaration here:
int w;
int h;
char matrix[maxn][maxn];

void F_Color(string s){
    #define reset   "\033[0m"
    #define black   "\033[30m"      /* Black */
    #define red     "\033[31m"      /* Red */
    #define green   "\033[32m"      /* Green */
    #define yellow  "\033[33m"      /* Yellow */
    #define blue    "\033[34m"      /* Blue */
    #define magenta "\033[35m"      /* Magenta */
    #define cyan    "\033[36m"      /* Cyan */
    #define white   "\033[37m"      /* White */
    cout << s;
    return;
}

void IO(){
	freopen("F:/W_Envi/Programming/C++/Main_Code/input.INP","r",stdin);
	freopen("F:/W_Envi/Programming/C++/Main_Code/output.OUT","w",stdout);
}

void IOS(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
//	system("Color F1");
}

void printMatrix(){
    for(int i=0; i < h ;i++) {
        for(int j=0; j < w; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return;
}

void solve(){
    cin >> w >> h;
    for(int i=0; i < h; i++) {
        cin >> matrix[i];
    }
    // printMatrix();

    /**
     * Init pos row.
     */
    for (int j = 0; j < w; j++) {
        matrix[h][j] = 'E';
    }

    /**
     * Init visited indexes.
     */
    bool vis[maxn];
    memset(vis, false, sizeof(vis));

    // printMatrix();

    int sx = -1, sy;
    for (int i = 0; i <= h; ++ i) {
        for (int j = 0; j < w; ++ j) {
            if (matrix[i][j] != 'R') {
                if (matrix[i][j] == 'Y') {
                    if(sx!=-1){
                        return;
                    }
                    sx = i;
                    sy = j;
                }
            }
        }
    }

    if(sx == -1||sx != 0){
        return;
    }
    vis[sy] = true;
    for (int i = sx; i < h; i++) {
        //Init Traveled booleans
        bool traveled[maxn];
        memset(traveled, false, sizeof(traveled));
        //BFS Traverse.
        for (int j = 0; j < w; j++) {
            if(vis[j]){
                if(matrix[i + 1][j] != 'R'){
                    traveled[j] = true;
                }
            } 
        }
        for (int j = 1; j < w; j++) {
            if(vis[j - 1]){
                if((matrix[i + 1][j] != 'R') && (matrix[i][j] != 'R')){
                    traveled[j] = true;
                }
            }
        }
        for (int j = 0; j + 1 < w; j++) {
            if(vis[j + 1]) {
                if((matrix[i + 1][j] != 'R') && (matrix[i][j] != 'R')){
                    traveled[j] = true;
                }
            }
        }
        //Copy values from "traveled" booleans to "visited" booleans.
        for(int i=0;i<sizeof(vis);i++){
            vis[i]=traveled[i];
        }
    }

    bool flag = false;
    for (int i = 0; i < w; i++) {
        flag |= vis[i];
    }

    if(flag){
        cout << "YES";
        return;
    }
    cout << "NO";
	return;
}

signed main(){
    // F_Color(cyan);
	#ifndef ONLINE_JUDGE
		IO();
	#endif
	IOS();
	// int q;
	// cin >> q;
	// for(int az=0;az<q;az++){
		// input();
		solve();
		// output();
	// }
    // F_Color(reset);
	return 0;
}


