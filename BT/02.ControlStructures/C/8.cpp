#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int             long long
#define fi                 first
#define se              second
#define mod             1000000007
#define maxn            100005
#define AWP             "_____"
#define base             31
#define pii             pair<int,int>
#define pi                 3.141592654
#define inf             INT_MAX
#define pb              push_back
#define all(x)          x.begin(),x.end()
#define lbnd            lower_bound
#define ubnd            upper_bound
#define sz(x)           (ll)x.size()
#define sum(x)          accumulate(x.begin(),x.end(),0ll)
#define each(ele,pool)     for(auto&& ele:pool)
#define outfi(x,bfer)    fixed << setprecision(bfer) << (x)

/*Extensions:
    ~Find minimum of a number of elements:
        int minn = min({a, b, c, d});
    ~Swap 2 values a and b:
        a^=b;     b^=a;    a^=b;
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
string s;
int p[10*maxn];
char c[10*maxn];
int f[3][10*maxn];

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
//    system("Color F1");
}

void input(){
    cin >> s;
    return;
}

void solve(){
    int idx = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i + 1]) {
            p[1 + idx]++;
        } 
        else {
            c[1 + idx] = s[i];
            p[1 + idx]++;
            idx++;
        }
    }
    n = idx;
    f[0][0] = 1;
    for (int i = 0; i < n; i++) {
        f[0][i + 1] += f[0][i];
        f[1][i + 1] += f[1][i];
        f[2][i + 1] += f[2][i];
        if (p[i + 1] >= 2) {
            f[2][i + 1] += f[0][i];
        }
        if (p[i + 1] >= 1) {
            if (i + 2 <= n && c[i] == c[i + 2] && p[i + 1] == 1) {
                f[2][i + 2]--;
            }
            f[1][i + 1] += f[0][i];
            f[2][i + 1] += f[1][i];
        }
    }
    cout << f[2][n];
    return;
}

void output(){
    cout << endl;
    return;
}

signed main(){
    // F_Color(cyan);
    // #ifndef ONLINE_JUDGE
    //     IO();
    // #endif
    IOS();
    // int q;
    // cin >> q;
    // for(int az=0;az<q;az++){
        input();
        solve();
        output();
    // }
    // F_Color(reset);
    return 0;
}



