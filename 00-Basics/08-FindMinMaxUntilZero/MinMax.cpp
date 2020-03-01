#include<iostream>

using namespace std;

int main() {

  int n, x;
  int max, min;

  cin >> x;
  max = x;
  min = x;
  if (max != 0) {

    while (1) {

      cin >> n;

      if (n == 0) break;

      else if (max < n) {
        max = n;
      } else if (min > n) {
        min = n;
      }
    }
    cout << min << " , " << max << endl;
  } else {
    cout << min << endl;
  }

  return 0;

}
