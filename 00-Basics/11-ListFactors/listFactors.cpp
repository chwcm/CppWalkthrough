#include<iostream>

#include<conio.h>

using namespace std;

int main() {
  int n;
  while (1) {
    cin >> n;
    if (n > 0) break;
  }

  for (int i = n; i > 0; i--) {
    if (n % i == 0) {
      cout << i << endl;
    }
  }

}
