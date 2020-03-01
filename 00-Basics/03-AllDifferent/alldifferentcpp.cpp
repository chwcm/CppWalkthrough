#include <iostream>

using namespace std;

int main() {
  int x, y, z;

  cin >> x >> y >> z;
  if (x == y || x == z || y == z) {
    cout << "not all different "<<endl;
  } else {
    cout << "all different"<<endl;
  }
  return 0;
}
