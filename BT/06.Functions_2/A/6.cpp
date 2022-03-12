#include<iostream>
using namespace std;

#define maxn 100005
int cnt = 0;

void recur(){
	++cnt;
	int a[maxn];
	cout << cnt << " " << "Hi" << endl;
	recur();
	return;
}

int main(){
	recur();
	return 0;
}

//chương trình chạy được 5 lần đệ quy rồi ngừng do tràn bộ nhớ.
//giảm kích thước mảng được khai báo địa phương
//sẽ giúp chương trình in ra được nhiều lần Hi hơn
//nhưng vẫn sẽ bị tràn bộ nhớ nếu không có điểm dừng đệ quy.