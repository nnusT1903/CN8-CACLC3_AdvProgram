#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int 			long long
#define fi 				first
#define se  			second
#define mod 			1000000007
#define maxn    		100005
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
struct String{
    int nSize;
    char* str;
    //Initialize.
    String(){
        nSize = 0;
        str = new char;
    }
    //Constructor.
    String(char*_str){
        nSize=strlen(_str);
        str = new char[nSize];
        strncpy(str,_str,nSize);
    }
    //Destructor.
    ~String(){
        delete[]str;
        nSize=0;
    }

    /**
     * @brief Function to print.
     */

    void print(){
        cout<<str;
    }

    /**
     * @brief Function to Append.
     * @param s char array.
     */

    void append(const char* s){
        int length = strlen(s)+nSize;
        char* appendArr = new char[length];
        for(int i=0;i<length;i++){
            if(i<nSize) appendArr[i]=str[i];
            else appendArr[i]=s[i-nSize];
        }
        strncpy(str,appendArr,length);
        delete []appendArr;
    }
};

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

signed main(){
    #ifndef ONLINE_JUDGE
        IO();
    #endif
    IOS();
    char str[] = "Hello";
    String s(str);
    s.append(" world!");
    cout<<s.str;
    return 0;
}