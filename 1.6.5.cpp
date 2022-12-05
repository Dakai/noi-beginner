#include <iostream>
using namespace std;
int main() {
  //using std::cin;
  //using std::cout;
  //using std::endl;
	string q;
	q  = "输入两个整数，输出交换之后的结果";
	cout << q << endl;
  int a, b, c;
  cin >> a >> b;
  c = a;
  a = b;
  b = c;
  cout << a << b << endl;
  return 0;
}
