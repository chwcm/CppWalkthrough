#include <iostream>

#include <algorithm>

using namespace std;

int main() {
  int a, b, c, temp;

  cout << "Enter the three numbers : " << endl;
  cin >> a >> b >> c;

  while (a > c || a > b || b > c) {

    if (a > b) {
      swap(a, b);
    }
    if (b > c) {
      swap(b, c);
    }

  }

  cout << a << endl;
  cout << b << endl;
  cout << c;
  return 0;
}
