#include <iostream>

using namespace std;

int main() {
  int x, y;

  cout << "Enter the two numbers : ";
  cin >> x >> y;

  if (x == y) {
    cout << "equal"<<endl;
  } else {
    cout << "not equal"<<endl;
  }

  return 0;
}
