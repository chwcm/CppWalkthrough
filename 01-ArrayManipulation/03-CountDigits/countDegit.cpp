#include<iostream>

using namespace std;

int digitcount[10] = {0,0,0,0,0,0,0,0,0,0};
int n;

int NbDigits(int n, int d) {
  int count = 0;

  while (n > 0) {

    if (n % 10 == d)
      count++;
    n = n / 10;
  }

  return count;
}

int main() {
  do {
    cin >> n;

    for (int i = 0; i < 10; i++) {
      digitcount[i] +=  NbDigits(n, i);
    }
  } while (n != 0);

  for (int i = 0; i < 10; i++) {
    cout << i << ": " << digitcount[i] << "\n";
  }

  return 0;
}
