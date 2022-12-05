#include <iostream>
//#include <algorithm>
//#include <ostream>
using namespace std;
//计算正方形、长方形、圆形、梯形面积
const double pi = 3.1415926;
int main(){
	//长宽，半径，梯形高
	double a, b, r, h;
	cin >> a >> b;
	cout << a*a << endl;
	cout << a*b << endl;
	cin >> r;
	cout << pi * r * r << endl;
	cin >> h;
	cout << (a+b)* h/2<<endl;
	return 0;
}
