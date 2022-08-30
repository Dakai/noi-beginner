#include <iostream>
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  int a, b, c;
  cin >> a >> b;
  c = a;
  a = b;
  b = c;
  cout << a << b << endl;
  return 0;
}
