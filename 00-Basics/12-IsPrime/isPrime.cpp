#include<iostream>

#include<conio.h>

using namespace std;

int main() {

  bool isPrime = true;
  int n, i;

  while (1) {
    cin >> n;
    if ((n > 0) && (n % 2 != 0)) break;
  }

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  if (isPrime)
    cout << " prime ";
  else
    cout << " not prime ";
  return 0;
}
