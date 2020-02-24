#include<iostream>

using namespace std;

int main() {

  int n;
  int sum = 0;

  do {

    cin >> n;
    if (n > 0) {
      sum++;
    }

  } while (n != 0);

  cout << sum << endl;
  return 0;

}
