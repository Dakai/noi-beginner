//求一元二次方程的根
//a = 2, b = 24, c = 7
//一元二次方程： ax^2 + bx + c = 0
//解方程公式：
//x = (-b +- sqrt(b^2 - 4ac))/2a
#include <cmath>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;
	double x1, x2;
	a = 2;
	b = 24;
	c = 7;
	x1 = (-b+sqrt(b * b - 4 * a * c))/(2 * a);
	x2 = (-b-sqrt(b * b - 4 * a * c))/(2 * a);
	cout << x1 << " "<< x2 << endl;
	return 0;
}
