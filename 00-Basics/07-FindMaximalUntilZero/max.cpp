#include<iostream>

using namespace std;

int main() {


  int max;

  cout << "Enter your numbers   : " << endl;
  cin >> max;

  if (max != 0) {

    while (1) {
  int n;
      cin >> n;

      if (n == 0) break;

      else if (max < n) {
        max = n;
      }
    }
  }
  cout << max << endl;
  return 0;

}
