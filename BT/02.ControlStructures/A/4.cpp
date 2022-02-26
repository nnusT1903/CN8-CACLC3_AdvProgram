#include<bits/stdc++.h>

using namespace std;

int dayofmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

bool leap(int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
    return false;
}

int offsetDays(int d, int m, int y){
    int offset = d;
    switch (m - 1){
    case 11:
        offset += dayofmonth[11];
    case 10:
        offset += dayofmonth[10];
    case 9:
        offset += dayofmonth[9];
    case 8:
        offset += dayofmonth[8];
    case 7:
        offset += dayofmonth[7];
    case 6:
        offset += dayofmonth[6];
    case 5:
        offset += dayofmonth[5];
    case 4:
        offset += dayofmonth[4];
    case 3:
        offset += dayofmonth[3];
    case 2:
        offset += dayofmonth[2];
    case 1:
        offset += dayofmonth[1];
    }
 
    if (leap(y) && m > 2)
        offset += 1;
 
    return offset;
}

void rev(int offset, int y, int *d, int *m){
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };
 
    if (leap(y))
        month[2] = 29;
 
    int i;
    for (i = 1; i <= 12; i++){
        if (offset <= month[i]){
            break;
        }
        offset = offset - month[i];
    }
 
    *d = offset;
    *m = i;
    return;
}

void fixx(int x){
    if(x>=10){
        cout << x;
    }
    else{
        cout << "0" << x;
    }
    return;
}

void add(int d1, int m1, int y1, int x){
    int offset1 = offsetDays(d1, m1, y1);
    int remain = leap(y1)?(366-offset1):(365-offset1);
    int y2, offset2;
    if (x <= remain){
        y2 = y1;
        offset2 = offset1 + x;
    }
 
    else{
        x -= remain;
        y2 = y1 + 1;
        int y2days = leap(y2)?366:365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = leap(y2)?366:365;
        }
        offset2 = x;
    }
 
    // Find values of day and month from
    // offset of result year.
    int m2, d2;
    rev(offset2, y2, &d2, &m2);
    fixx(d2);
    cout << "-";
    fixx(m2);
    cout << "-";
    fixx(y2);
    cout << endl;
    return;
}

signed main(){
    int k;
    int d,m,y;

    cin >> d >> m >> y;
    while(cin >> k){
        add(d,m,y,k);
    }
    return 0;
}