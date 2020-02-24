#include<iostream>

using namespace std;

int main() {

  int n, i;
  int tab[6] = {
    0,
    0,
    0,
    0,
    0,
    0
  };

  do {

    cin >> n;

    if (n > 5) {
      tab[5]++;
    } else {
        tab[n-1]++;
    }

  } while (n != 0);
  for (int i = 0; i < 5; i++) {
    cout << i + 1 << ": " << tab[i] << "\n";
  }

  cout << "larger: " << tab[5] << endl;
  return 0;

}
