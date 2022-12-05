//求任意一个三位数的数字和
#include<iostream>
using namespace std;
int main(){
	int n, a, b, c;
	cin >> n;
	//个位
	a = n % 10;
	//十位
	b = (n / 10)%10;
	//百位
	c = n / 100;
	cout << a+b+c << endl;
	return 0;
}

