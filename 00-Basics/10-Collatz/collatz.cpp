#include<iostream>

using namespace std;

int main() {

  int n;

  do {

    cin >> n;

  } while (n <= 0);

  do {

    if (n % 2 == 0) {
      n = n / 2;

    } else {
      n = n * 3 + 1;

    }
    cout << n << endl;

  } while (n != 1);

  return 0;

}
