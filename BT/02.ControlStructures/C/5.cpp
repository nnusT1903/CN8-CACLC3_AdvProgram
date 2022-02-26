#include<bits/stdc++.h>

using namespace std;


#define int long long

string one[] = { "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", 
                "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };
string tens[] = { "", "", "twenty", "thirty", "forty","fifty", "sixty", "seventy", "eighty", "ninety" };
string hund[] = { "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};

string numToWords(int n, string s){
    string str = "";
    if(n>=100){
        str+=hund[n/100] + "hundred " +numToWords(n%100,"");
    }
    else if (n > 19){
        str += tens[n / 10] + "-"+ one[n % 10];
    }
    else{
        str += one[n];
    }
    if (n){
        str += s;
    }
    return str;
}
 
string convertToWords(long n){
    string out;
    out += numToWords((n / 1000000), "million ");
    out += numToWords(((n / 1000) % 1000), "thousand ");
    out += numToWords((n % 1000), "");
    //correction
    if(out[out.size()-1]=='-'){
        out.erase(out.size()-1,1);
    }
    if(out=="") {
        out = "zero";
    }
    return out;
}

signed main(){
    int x;
    cin >> x;
    
    if(x<-999999999||x>999999999){
        cout<< "Invalid";
        return 0;
    }
    if(x < 0){
        cout << "negative " ;
        x*=-1;
        cout << convertToWords(x);
    }
    else cout << convertToWords(x);
    
    return 0;
    
}